#' Update time-varying parameters via elliptical slice sampling.
#'
#' @param tparam list containing the time-varying parameters
#' @param path_cur list with the current ode
#' @param n_ess_updates number of elliptical slice sampling updates
#' @inheritParams initialize_lna
#'
#' @return updated time-varying parameter values and lna path
#' @export
update_tparam_ode <-
        function(tparam,
                 path_cur,
                 data,
                 ode_parameters,
                 ode_param_vec,
                 pathmat_prop,
                 censusmat,
                 emitmat,
                 flow_matrix,
                 stoich_matrix,
                 ode_times,
                 forcing_inds,
                 forcing_tcov_inds,
                 forcings_out,
                 forcing_transfers,
                 ode_param_inds,
                 ode_const_inds,
                 ode_tcovar_inds,
                 ode_initdist_inds,
                 param_update_inds,
                 census_indices,
                 ode_event_inds,
                 measproc_indmat,
                 ode_pointer,
                 ode_set_pars_pointer,
                 d_meas_pointer,
                 do_prevalence,
                 step_size,
                 tparam_steps,
                 tparam_angle,
                 tparam_bracket_width,
                 n_tparam_updates) {
              
      # initialize ess count
      step_count <- 1.0

      for(k in seq_len(n_tparam_updates)) {
            
            # get the initial state parameters and census the ode path
            init_state <- ode_parameters[1, ode_initdist_inds + 1]
            
            # choose a likelihood threshold
            threshold <- path_cur$data_log_lik + log(runif(1))
            
            # initial proposal, which also defines a bracket
            # theta <- runif(1, 0, tparam_bracket_width)
            # lower <- theta - tparam_bracket_width; upper <- theta
            pos <- runif(1) 
            lower <- -tparam_bracket_width * pos; upper <- lower + tparam_bracket_width
            theta <- runif(1, lower, upper)
            
            # sample a new set of perturbations and construct the first proposal
            for(p in seq_along(tparam)) {
                  
                  # sample perturbations
                  draw_normals(tparam[[p]]$draws_prop)
                  
                  # compute proposal
                  copy_vec(dest = tparam[[p]]$draws_ess, orig = cos(theta) * tparam[[p]]$draws_cur + sin(theta) * tparam[[p]]$draws_prop)
                  
                  # map to parameter
                  insert_tparam(tcovar    = ode_parameters,
                                values    = 
                                      tparam[[p]]$draws2par(parameters = ode_parameters[1,], 
                                                            draws = tparam[[p]]$draws_ess),
                                col_ind   = tparam[[p]]$col_ind,
                                tpar_inds = tparam[[p]]$tpar_inds)
            }
            
            # initialize the data log likelihood for the proposed path
            data_log_lik_prop <- NULL
            
            # map the perturbations to an LNA path
            try({
                  map_pars_2_ode(
                        pathmat           = pathmat_prop,
                        ode_times         = ode_times,
                        ode_pars          = ode_parameters,
                        init_start        = ode_initdist_inds[1],
                        ode_param_inds    = ode_param_inds,
                        ode_tcovar_inds   = ode_tcovar_inds,
                        param_update_inds = param_update_inds,
                        stoich_matrix     = stoich_matrix,
                        forcing_inds      = forcing_inds,
                        forcing_tcov_inds = forcing_tcov_inds,
                        forcings_out      = forcings_out,
                        forcing_transfers = forcing_transfers,
                        ode_pointer       = ode_pointer,
                        set_pars_pointer  = ode_set_pars_pointer,
                        step_size         = step_size
                  )
                  
                  census_lna(
                        path                = pathmat_prop,
                        census_path         = censusmat,
                        census_inds         = census_indices,
                        lna_event_inds      = ode_event_inds,
                        flow_matrix_lna     = flow_matrix,
                        do_prevalence       = do_prevalence,
                        init_state          = init_state,
                        lna_pars            = ode_parameters,
                        forcing_inds        = forcing_inds,
                        forcing_tcov_inds   = forcing_tcov_inds,
                        forcings_out        = forcings_out,
                        forcing_transfers   = forcing_transfers
                  )
                  
                  # evaluate the density of the incidence counts
                  evaluate_d_measure_LNA(
                        emitmat           = emitmat,
                        obsmat            = data,
                        censusmat         = censusmat,
                        measproc_indmat   = measproc_indmat,
                        lna_parameters    = ode_parameters,
                        lna_param_inds    = ode_param_inds,
                        lna_const_inds    = ode_const_inds,
                        lna_tcovar_inds   = ode_tcovar_inds,
                        param_update_inds = param_update_inds,
                        census_indices    = census_indices,
                        lna_param_vec     = ode_param_vec,
                        d_meas_ptr        = d_meas_pointer
                  )
                  
                  # compute the data log likelihood
                  data_log_lik_prop <- sum(emitmat[,-1][measproc_indmat])
                  if(is.nan(data_log_lik_prop)) data_log_lik_prop <- -Inf
            }, silent = TRUE)
            
            if(is.null(data_log_lik_prop)) data_log_lik_prop <- -Inf
            
            # continue proposing if not accepted
            while((upper - lower) > sqrt(.Machine$double.eps) && (data_log_lik_prop < threshold)) {
                  
                  # increment the number of ESS proposals for the current iteration
                  step_count <- step_count + 1
                  
                  # shrink the bracket
                  if(theta < 0) {
                        lower <- theta
                  } else {
                        upper <- theta
                  }
                  
                  # sample a new point
                  theta <- runif(1, lower, upper)
                  
                  # construct the next proposal
                  for(p in seq_along(tparam)) {
                        
                        # compute proposal
                        copy_vec(dest = tparam[[p]]$draws_ess, orig = cos(theta) * tparam[[p]]$draws_cur + sin(theta) * tparam[[p]]$draws_prop)
                        
                        # map to parameter
                        insert_tparam(tcovar    = ode_parameters,
                                      values    = 
                                            tparam[[p]]$draws2par(parameters = ode_parameters[1,], 
                                                                  draws = tparam[[p]]$draws_ess),
                                      col_ind   = tparam[[p]]$col_ind,
                                      tpar_inds = tparam[[p]]$tpar_inds)
                  }
                  
                  # initialize the data log likelihood for the proposed path
                  data_log_lik_prop <- NULL
                  
                  # map the perturbations to an ode path
                  try({
                        map_pars_2_ode(
                              pathmat           = pathmat_prop,
                              ode_times         = ode_times,
                              ode_pars          = ode_parameters,
                              init_start        = ode_initdist_inds[1],
                              ode_param_inds    = ode_param_inds,
                              ode_tcovar_inds   = ode_tcovar_inds,
                              param_update_inds = param_update_inds,
                              stoich_matrix     = stoich_matrix,
                              forcing_inds      = forcing_inds,
                              forcing_tcov_inds = forcing_tcov_inds,
                              forcings_out      = forcings_out,
                              forcing_transfers = forcing_transfers,
                              ode_pointer       = ode_pointer,
                              set_pars_pointer  = ode_set_pars_pointer,
                              step_size         = step_size
                        )
                        
                        census_lna(
                              path                = pathmat_prop,
                              census_path         = censusmat,
                              census_inds         = census_indices,
                              lna_event_inds      = ode_event_inds,
                              flow_matrix_lna     = flow_matrix,
                              do_prevalence       = do_prevalence,
                              init_state          = init_state,
                              lna_pars            = ode_parameters,
                              forcing_inds        = forcing_inds,
                              forcing_tcov_inds   = forcing_tcov_inds,
                              forcings_out        = forcings_out,
                              forcing_transfers   = forcing_transfers
                        )
                        
                        # evaluate the density of the incidence counts
                        evaluate_d_measure_LNA(
                              emitmat           = emitmat,
                              obsmat            = data,
                              censusmat         = censusmat,
                              measproc_indmat   = measproc_indmat,
                              lna_parameters    = ode_parameters,
                              lna_param_inds    = ode_param_inds,
                              lna_const_inds    = ode_const_inds,
                              lna_tcovar_inds   = ode_tcovar_inds,
                              param_update_inds = param_update_inds,
                              census_indices    = census_indices,
                              lna_param_vec     = ode_param_vec,
                              d_meas_ptr        = d_meas_pointer
                        )
                        
                        # compute the data log likelihood
                        data_log_lik_prop <- sum(emitmat[,-1][measproc_indmat])
                        if(is.nan(data_log_lik_prop)) data_log_lik_prop <- -Inf
                  }, silent = TRUE)
                  
                  if(is.null(data_log_lik_prop)) data_log_lik_prop <- -Inf
            }
            
            # if the bracket width is not equal to zero, update the draws, path, and data log likelihood
            if((upper - lower) > sqrt(.Machine$double.eps)) {
                  
                  # transfer the new path and residual path into the* sin(theta) path_prop list
                  for(p in seq_along(tparam)) {
                        copy_vec(tparam[[p]]$draws_cur, tparam[[p]]$draws_ess)
                  }
                  
                  # copy the ode path and the data log likelihood
                  copy_mat(path_cur$ode_path, pathmat_prop)
                  copy_vec(path_cur$data_log_lik, data_log_lik_prop)
                  
            } else {
                  
                  # recover the original time-varying parameter values
                  for(p in seq_along(tparam)) {
                        insert_tparam(tcovar    = ode_parameters,
                                      values    = 
                                            tparam[[p]]$draws2par(parameters = ode_parameters[1,], 
                                                                  draws = tparam[[p]]$draws_cur),
                                      col_ind   = tparam[[p]]$col_ind,
                                      tpar_inds = tparam[[p]]$tpar_inds)
                  }
            }
            
            # copy steps and angle
            copy_vec(tparam_steps, step_count)
            copy_vec(tparam_angle, theta)     
      }
}