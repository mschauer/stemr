// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "stemr_types.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// build_census_path
arma::mat build_census_path(Rcpp::NumericMatrix& path, Rcpp::NumericVector& census_times, Rcpp::IntegerVector& census_columns);
RcppExport SEXP _stemr_build_census_path(SEXP pathSEXP, SEXP census_timesSEXP, SEXP census_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type census_times(census_timesSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type census_columns(census_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(build_census_path(path, census_times, census_columns));
    return rcpp_result_gen;
END_RCPP
}
// CALL_D_MEASURE
void CALL_D_MEASURE(Rcpp::NumericMatrix& emitmat, const Rcpp::LogicalVector& emit_inds, const int record_ind, const Rcpp::NumericVector& record, const Rcpp::NumericVector& state, const Rcpp::NumericVector& parameters, const Rcpp::NumericVector& constants, const Rcpp::NumericVector& tcovar, SEXP d_meas_ptr);
RcppExport SEXP _stemr_CALL_D_MEASURE(SEXP emitmatSEXP, SEXP emit_indsSEXP, SEXP record_indSEXP, SEXP recordSEXP, SEXP stateSEXP, SEXP parametersSEXP, SEXP constantsSEXP, SEXP tcovarSEXP, SEXP d_meas_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type emitmat(emitmatSEXP);
    Rcpp::traits::input_parameter< const Rcpp::LogicalVector& >::type emit_inds(emit_indsSEXP);
    Rcpp::traits::input_parameter< const int >::type record_ind(record_indSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type record(recordSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type state(stateSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type constants(constantsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type tcovar(tcovarSEXP);
    Rcpp::traits::input_parameter< SEXP >::type d_meas_ptr(d_meas_ptrSEXP);
    CALL_D_MEASURE(emitmat, emit_inds, record_ind, record, state, parameters, constants, tcovar, d_meas_ptr);
    return R_NilValue;
END_RCPP
}
// CALL_INTEGRATE_STEM_LNA
void CALL_INTEGRATE_STEM_LNA(Rcpp::NumericVector& init, double start, double end, double step_size, SEXP lna_ode_ptr);
RcppExport SEXP _stemr_CALL_INTEGRATE_STEM_LNA(SEXP initSEXP, SEXP startSEXP, SEXP endSEXP, SEXP step_sizeSEXP, SEXP lna_ode_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type init(initSEXP);
    Rcpp::traits::input_parameter< double >::type start(startSEXP);
    Rcpp::traits::input_parameter< double >::type end(endSEXP);
    Rcpp::traits::input_parameter< double >::type step_size(step_sizeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type lna_ode_ptr(lna_ode_ptrSEXP);
    CALL_INTEGRATE_STEM_LNA(init, start, end, step_size, lna_ode_ptr);
    return R_NilValue;
END_RCPP
}
// CALL_RATE_FCN
void CALL_RATE_FCN(Rcpp::NumericVector& rates, const Rcpp::LogicalVector& inds, const arma::rowvec& state, const Rcpp::NumericVector& parameters, const Rcpp::NumericVector& constants, const arma::rowvec& tcovar, SEXP rate_ptr);
RcppExport SEXP _stemr_CALL_RATE_FCN(SEXP ratesSEXP, SEXP indsSEXP, SEXP stateSEXP, SEXP parametersSEXP, SEXP constantsSEXP, SEXP tcovarSEXP, SEXP rate_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type rates(ratesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::LogicalVector& >::type inds(indsSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type state(stateSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type constants(constantsSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type tcovar(tcovarSEXP);
    Rcpp::traits::input_parameter< SEXP >::type rate_ptr(rate_ptrSEXP);
    CALL_RATE_FCN(rates, inds, state, parameters, constants, tcovar, rate_ptr);
    return R_NilValue;
END_RCPP
}
// CALL_R_MEASURE
void CALL_R_MEASURE(Rcpp::NumericMatrix& obsmat, const Rcpp::LogicalVector& emit_inds, const int record_ind, const Rcpp::NumericVector& state, const Rcpp::NumericVector& parameters, const Rcpp::NumericVector& constants, const Rcpp::NumericVector& tcovar, SEXP r_meas_ptr);
RcppExport SEXP _stemr_CALL_R_MEASURE(SEXP obsmatSEXP, SEXP emit_indsSEXP, SEXP record_indSEXP, SEXP stateSEXP, SEXP parametersSEXP, SEXP constantsSEXP, SEXP tcovarSEXP, SEXP r_meas_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type obsmat(obsmatSEXP);
    Rcpp::traits::input_parameter< const Rcpp::LogicalVector& >::type emit_inds(emit_indsSEXP);
    Rcpp::traits::input_parameter< const int >::type record_ind(record_indSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type state(stateSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type constants(constantsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type tcovar(tcovarSEXP);
    Rcpp::traits::input_parameter< SEXP >::type r_meas_ptr(r_meas_ptrSEXP);
    CALL_R_MEASURE(obsmat, emit_inds, record_ind, state, parameters, constants, tcovar, r_meas_ptr);
    return R_NilValue;
END_RCPP
}
// CALL_SET_LNA_PARAMS
void CALL_SET_LNA_PARAMS(Rcpp::NumericVector& p, SEXP set_lna_params_ptr);
RcppExport SEXP _stemr_CALL_SET_LNA_PARAMS(SEXP pSEXP, SEXP set_lna_params_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type p(pSEXP);
    Rcpp::traits::input_parameter< SEXP >::type set_lna_params_ptr(set_lna_params_ptrSEXP);
    CALL_SET_LNA_PARAMS(p, set_lna_params_ptr);
    return R_NilValue;
END_RCPP
}
// census_lna
void census_lna(const arma::mat& path, arma::mat& census_path, const arma::uvec& census_inds, const arma::mat& flow_matrix_lna, bool do_prevalence, const arma::rowvec& init_state, const arma::uvec& incidence_codes_lna);
RcppExport SEXP _stemr_census_lna(SEXP pathSEXP, SEXP census_pathSEXP, SEXP census_indsSEXP, SEXP flow_matrix_lnaSEXP, SEXP do_prevalenceSEXP, SEXP init_stateSEXP, SEXP incidence_codes_lnaSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type census_path(census_pathSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type census_inds(census_indsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type flow_matrix_lna(flow_matrix_lnaSEXP);
    Rcpp::traits::input_parameter< bool >::type do_prevalence(do_prevalenceSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type init_state(init_stateSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type incidence_codes_lna(incidence_codes_lnaSEXP);
    census_lna(path, census_path, census_inds, flow_matrix_lna, do_prevalence, init_state, incidence_codes_lna);
    return R_NilValue;
END_RCPP
}
// compute_incidence
void compute_incidence(arma::mat& censusmat, arma::uvec& col_inds, Rcpp::List& row_inds);
RcppExport SEXP _stemr_compute_incidence(SEXP censusmatSEXP, SEXP col_indsSEXP, SEXP row_indsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type censusmat(censusmatSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type col_inds(col_indsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type row_inds(row_indsSEXP);
    compute_incidence(censusmat, col_inds, row_inds);
    return R_NilValue;
END_RCPP
}
// convert_lna2
void convert_lna2(const arma::mat& path, const arma::mat& flow_matrix, const arma::rowvec& init_state, arma::mat& statemat);
RcppExport SEXP _stemr_convert_lna2(SEXP pathSEXP, SEXP flow_matrixSEXP, SEXP init_stateSEXP, SEXP statematSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type flow_matrix(flow_matrixSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type init_state(init_stateSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type statemat(statematSEXP);
    convert_lna2(path, flow_matrix, init_state, statemat);
    return R_NilValue;
END_RCPP
}
// pars2lnapars
void pars2lnapars(arma::mat& lnapars, const arma::rowvec& parameters);
RcppExport SEXP _stemr_pars2lnapars(SEXP lnaparsSEXP, SEXP parametersSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type lnapars(lnaparsSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type parameters(parametersSEXP);
    pars2lnapars(lnapars, parameters);
    return R_NilValue;
END_RCPP
}
// copy_elem
void copy_elem(arma::rowvec& dest, const arma::rowvec& orig, int ind);
RcppExport SEXP _stemr_copy_elem(SEXP destSEXP, SEXP origSEXP, SEXP indSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec& >::type dest(destSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type orig(origSEXP);
    Rcpp::traits::input_parameter< int >::type ind(indSEXP);
    copy_elem(dest, orig, ind);
    return R_NilValue;
END_RCPP
}
// copy_vec
void copy_vec(arma::rowvec& dest, const arma::rowvec& orig);
RcppExport SEXP _stemr_copy_vec(SEXP destSEXP, SEXP origSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec& >::type dest(destSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type orig(origSEXP);
    copy_vec(dest, orig);
    return R_NilValue;
END_RCPP
}
// copy_mat
void copy_mat(arma::mat& dest, const arma::mat& orig);
RcppExport SEXP _stemr_copy_mat(SEXP destSEXP, SEXP origSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type dest(destSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type orig(origSEXP);
    copy_mat(dest, orig);
    return R_NilValue;
END_RCPP
}
// copy_col
void copy_col(arma::mat& dest, const arma::mat& orig, int ind);
RcppExport SEXP _stemr_copy_col(SEXP destSEXP, SEXP origSEXP, SEXP indSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type dest(destSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type orig(origSEXP);
    Rcpp::traits::input_parameter< int >::type ind(indSEXP);
    copy_col(dest, orig, ind);
    return R_NilValue;
END_RCPP
}
// copy_2_rows
void copy_2_rows(arma::mat& dest, const arma::mat& orig, const arma::uvec& inds);
RcppExport SEXP _stemr_copy_2_rows(SEXP destSEXP, SEXP origSEXP, SEXP indsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type dest(destSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type orig(origSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type inds(indsSEXP);
    copy_2_rows(dest, orig, inds);
    return R_NilValue;
END_RCPP
}
// c_rw_adaptive
void c_rw_adaptive(arma::rowvec& params_prop, const arma::rowvec& params_cur, int ind, const arma::vec& kernel_cov, const arma::vec& proposal_scaling, const arma::vec& nugget);
RcppExport SEXP _stemr_c_rw_adaptive(SEXP params_propSEXP, SEXP params_curSEXP, SEXP indSEXP, SEXP kernel_covSEXP, SEXP proposal_scalingSEXP, SEXP nuggetSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec& >::type params_prop(params_propSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type params_cur(params_curSEXP);
    Rcpp::traits::input_parameter< int >::type ind(indSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type kernel_cov(kernel_covSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type proposal_scaling(proposal_scalingSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type nugget(nuggetSEXP);
    c_rw_adaptive(params_prop, params_cur, ind, kernel_cov, proposal_scaling, nugget);
    return R_NilValue;
END_RCPP
}
// c_rw
void c_rw(arma::rowvec& params_prop, const arma::rowvec& params_cur, int ind, const arma::vec& kernel_cov);
RcppExport SEXP _stemr_c_rw(SEXP params_propSEXP, SEXP params_curSEXP, SEXP indSEXP, SEXP kernel_covSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec& >::type params_prop(params_propSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type params_cur(params_curSEXP);
    Rcpp::traits::input_parameter< int >::type ind(indSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type kernel_cov(kernel_covSEXP);
    c_rw(params_prop, params_cur, ind, kernel_cov);
    return R_NilValue;
END_RCPP
}
// evaluate_d_measure
void evaluate_d_measure(Rcpp::NumericMatrix& emitmat, const Rcpp::NumericMatrix& obsmat, const Rcpp::NumericMatrix& statemat, const Rcpp::LogicalMatrix& measproc_indmat, const Rcpp::NumericVector& parameters, const Rcpp::NumericVector& constants, const Rcpp::NumericMatrix& tcovar_censusmat, SEXP d_meas_ptr);
RcppExport SEXP _stemr_evaluate_d_measure(SEXP emitmatSEXP, SEXP obsmatSEXP, SEXP statematSEXP, SEXP measproc_indmatSEXP, SEXP parametersSEXP, SEXP constantsSEXP, SEXP tcovar_censusmatSEXP, SEXP d_meas_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type emitmat(emitmatSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type obsmat(obsmatSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type statemat(statematSEXP);
    Rcpp::traits::input_parameter< const Rcpp::LogicalMatrix& >::type measproc_indmat(measproc_indmatSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type constants(constantsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type tcovar_censusmat(tcovar_censusmatSEXP);
    Rcpp::traits::input_parameter< SEXP >::type d_meas_ptr(d_meas_ptrSEXP);
    evaluate_d_measure(emitmat, obsmat, statemat, measproc_indmat, parameters, constants, tcovar_censusmat, d_meas_ptr);
    return R_NilValue;
END_RCPP
}
// evaluate_d_measure_LNA
void evaluate_d_measure_LNA(Rcpp::NumericMatrix& emitmat, const Rcpp::NumericMatrix& obsmat, const Rcpp::NumericMatrix& censusmat, const Rcpp::LogicalMatrix& measproc_indmat, const Rcpp::NumericMatrix& lna_parameters, Rcpp::NumericVector& lna_params_temp, const Rcpp::IntegerVector& lna_param_inds, const Rcpp::IntegerVector& lna_const_inds, const Rcpp::IntegerVector& lna_tcovar_inds, const Rcpp::LogicalVector& param_update_inds, const Rcpp::IntegerVector& census_indices, SEXP d_meas_ptr);
RcppExport SEXP _stemr_evaluate_d_measure_LNA(SEXP emitmatSEXP, SEXP obsmatSEXP, SEXP censusmatSEXP, SEXP measproc_indmatSEXP, SEXP lna_parametersSEXP, SEXP lna_params_tempSEXP, SEXP lna_param_indsSEXP, SEXP lna_const_indsSEXP, SEXP lna_tcovar_indsSEXP, SEXP param_update_indsSEXP, SEXP census_indicesSEXP, SEXP d_meas_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type emitmat(emitmatSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type obsmat(obsmatSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type censusmat(censusmatSEXP);
    Rcpp::traits::input_parameter< const Rcpp::LogicalMatrix& >::type measproc_indmat(measproc_indmatSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type lna_parameters(lna_parametersSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type lna_params_temp(lna_params_tempSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type lna_param_inds(lna_param_indsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type lna_const_inds(lna_const_indsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type lna_tcovar_inds(lna_tcovar_indsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::LogicalVector& >::type param_update_inds(param_update_indsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type census_indices(census_indicesSEXP);
    Rcpp::traits::input_parameter< SEXP >::type d_meas_ptr(d_meas_ptrSEXP);
    evaluate_d_measure_LNA(emitmat, obsmat, censusmat, measproc_indmat, lna_parameters, lna_params_temp, lna_param_inds, lna_const_inds, lna_tcovar_inds, param_update_inds, census_indices, d_meas_ptr);
    return R_NilValue;
END_RCPP
}
// simulate_gillespie
arma::mat simulate_gillespie(const arma::mat& flow, const Rcpp::NumericVector& parameters, const Rcpp::NumericVector& constants, const arma::mat& tcovar, const arma::rowvec& init_states, const Rcpp::LogicalMatrix& rate_adjmat, const arma::mat& tcovar_adjmat, const arma::mat& tcovar_changemat, const Rcpp::IntegerVector init_dims, SEXP rate_ptr);
RcppExport SEXP _stemr_simulate_gillespie(SEXP flowSEXP, SEXP parametersSEXP, SEXP constantsSEXP, SEXP tcovarSEXP, SEXP init_statesSEXP, SEXP rate_adjmatSEXP, SEXP tcovar_adjmatSEXP, SEXP tcovar_changematSEXP, SEXP init_dimsSEXP, SEXP rate_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type flow(flowSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type constants(constantsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type tcovar(tcovarSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type init_states(init_statesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::LogicalMatrix& >::type rate_adjmat(rate_adjmatSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type tcovar_adjmat(tcovar_adjmatSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type tcovar_changemat(tcovar_changematSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type init_dims(init_dimsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type rate_ptr(rate_ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(simulate_gillespie(flow, parameters, constants, tcovar, init_states, rate_adjmat, tcovar_adjmat, tcovar_changemat, init_dims, rate_ptr));
    return rcpp_result_gen;
END_RCPP
}
// find_interval
Rcpp::IntegerVector find_interval(Rcpp::NumericVector& x, Rcpp::NumericVector& breaks, bool rightmost_closed, bool all_inside);
RcppExport SEXP _stemr_find_interval(SEXP xSEXP, SEXP breaksSEXP, SEXP rightmost_closedSEXP, SEXP all_insideSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type breaks(breaksSEXP);
    Rcpp::traits::input_parameter< bool >::type rightmost_closed(rightmost_closedSEXP);
    Rcpp::traits::input_parameter< bool >::type all_inside(all_insideSEXP);
    rcpp_result_gen = Rcpp::wrap(find_interval(x, breaks, rightmost_closed, all_inside));
    return rcpp_result_gen;
END_RCPP
}
// g_prop2c_prop
void g_prop2c_prop(arma::mat& g2c_mat, const arma::rowvec& params_cur, const arma::rowvec& params_prop);
RcppExport SEXP _stemr_g_prop2c_prop(SEXP g2c_matSEXP, SEXP params_curSEXP, SEXP params_propSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type g2c_mat(g2c_matSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type params_cur(params_curSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type params_prop(params_propSEXP);
    g_prop2c_prop(g2c_mat, params_cur, params_prop);
    return R_NilValue;
END_RCPP
}
// lna_density2
Rcpp::List lna_density2(const Rcpp::List& path, const arma::colvec& lna_times, const Rcpp::NumericMatrix& lna_pars, const Rcpp::LogicalVector& param_update_inds, const arma::mat& flow_matrix, SEXP lna_pointer_ess, SEXP lna_ess_set_pars_ptr);
RcppExport SEXP _stemr_lna_density2(SEXP pathSEXP, SEXP lna_timesSEXP, SEXP lna_parsSEXP, SEXP param_update_indsSEXP, SEXP flow_matrixSEXP, SEXP lna_pointer_essSEXP, SEXP lna_ess_set_pars_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type lna_times(lna_timesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type lna_pars(lna_parsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::LogicalVector& >::type param_update_inds(param_update_indsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type flow_matrix(flow_matrixSEXP);
    Rcpp::traits::input_parameter< SEXP >::type lna_pointer_ess(lna_pointer_essSEXP);
    Rcpp::traits::input_parameter< SEXP >::type lna_ess_set_pars_ptr(lna_ess_set_pars_ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(lna_density2(path, lna_times, lna_pars, param_update_inds, flow_matrix, lna_pointer_ess, lna_ess_set_pars_ptr));
    return rcpp_result_gen;
END_RCPP
}
// lna_density
Rcpp::List lna_density(const Rcpp::List& path, const arma::colvec& lna_times, const Rcpp::NumericMatrix& lna_pars, const Rcpp::LogicalVector& param_update_inds, const arma::mat& flow_matrix, SEXP lna_pointer, SEXP set_pars_pointer);
RcppExport SEXP _stemr_lna_density(SEXP pathSEXP, SEXP lna_timesSEXP, SEXP lna_parsSEXP, SEXP param_update_indsSEXP, SEXP flow_matrixSEXP, SEXP lna_pointerSEXP, SEXP set_pars_pointerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type lna_times(lna_timesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type lna_pars(lna_parsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::LogicalVector& >::type param_update_inds(param_update_indsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type flow_matrix(flow_matrixSEXP);
    Rcpp::traits::input_parameter< SEXP >::type lna_pointer(lna_pointerSEXP);
    Rcpp::traits::input_parameter< SEXP >::type set_pars_pointer(set_pars_pointerSEXP);
    rcpp_result_gen = Rcpp::wrap(lna_density(path, lna_times, lna_pars, param_update_inds, flow_matrix, lna_pointer, set_pars_pointer));
    return rcpp_result_gen;
END_RCPP
}
// lna_incid2prev
arma::mat lna_incid2prev(const arma::mat& path, const arma::mat& flow_matrix, const arma::rowvec& init_state);
RcppExport SEXP _stemr_lna_incid2prev(SEXP pathSEXP, SEXP flow_matrixSEXP, SEXP init_stateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type flow_matrix(flow_matrixSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type init_state(init_stateSEXP);
    rcpp_result_gen = Rcpp::wrap(lna_incid2prev(path, flow_matrix, init_state));
    return rcpp_result_gen;
END_RCPP
}
// map_draws_2_lna
void map_draws_2_lna(arma::mat& pathmat, const arma::mat& draws, const arma::rowvec& lna_times, const Rcpp::NumericMatrix& lna_pars, const int init_start, const Rcpp::LogicalVector& param_update_inds, const arma::mat& stoich_matrix, SEXP lna_pointer, SEXP set_pars_pointer);
RcppExport SEXP _stemr_map_draws_2_lna(SEXP pathmatSEXP, SEXP drawsSEXP, SEXP lna_timesSEXP, SEXP lna_parsSEXP, SEXP init_startSEXP, SEXP param_update_indsSEXP, SEXP stoich_matrixSEXP, SEXP lna_pointerSEXP, SEXP set_pars_pointerSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type pathmat(pathmatSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type draws(drawsSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type lna_times(lna_timesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type lna_pars(lna_parsSEXP);
    Rcpp::traits::input_parameter< const int >::type init_start(init_startSEXP);
    Rcpp::traits::input_parameter< const Rcpp::LogicalVector& >::type param_update_inds(param_update_indsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stoich_matrix(stoich_matrixSEXP);
    Rcpp::traits::input_parameter< SEXP >::type lna_pointer(lna_pointerSEXP);
    Rcpp::traits::input_parameter< SEXP >::type set_pars_pointer(set_pars_pointerSEXP);
    map_draws_2_lna(pathmat, draws, lna_times, lna_pars, init_start, param_update_inds, stoich_matrix, lna_pointer, set_pars_pointer);
    return R_NilValue;
END_RCPP
}
// rmvtn
arma::mat rmvtn(int n, const arma::rowvec& mu, const arma::mat& sigma);
RcppExport SEXP _stemr_rmvtn(SEXP nSEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(rmvtn(n, mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// dmvtn
arma::vec dmvtn(const arma::mat& x, const arma::rowvec& mu, const arma::mat& sigma, bool logd);
RcppExport SEXP _stemr_dmvtn(SEXP xSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP logdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type logd(logdSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvtn(x, mu, sigma, logd));
    return rcpp_result_gen;
END_RCPP
}
// mvn_c_adaptive
void mvn_c_adaptive(arma::rowvec& params_prop, const arma::rowvec& params_cur, const arma::mat& kernel_cov, const arma::vec& proposal_scaling, arma::mat& sqrt_scalemat, double nugget);
RcppExport SEXP _stemr_mvn_c_adaptive(SEXP params_propSEXP, SEXP params_curSEXP, SEXP kernel_covSEXP, SEXP proposal_scalingSEXP, SEXP sqrt_scalematSEXP, SEXP nuggetSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec& >::type params_prop(params_propSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type params_cur(params_curSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type kernel_cov(kernel_covSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type proposal_scaling(proposal_scalingSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type sqrt_scalemat(sqrt_scalematSEXP);
    Rcpp::traits::input_parameter< double >::type nugget(nuggetSEXP);
    mvn_c_adaptive(params_prop, params_cur, kernel_cov, proposal_scaling, sqrt_scalemat, nugget);
    return R_NilValue;
END_RCPP
}
// mvn_g_adaptive
void mvn_g_adaptive(arma::rowvec& params_prop, const arma::rowvec& params_cur, const arma::mat& kernel_cov, double proposal_scaling, double nugget);
RcppExport SEXP _stemr_mvn_g_adaptive(SEXP params_propSEXP, SEXP params_curSEXP, SEXP kernel_covSEXP, SEXP proposal_scalingSEXP, SEXP nuggetSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec& >::type params_prop(params_propSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type params_cur(params_curSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type kernel_cov(kernel_covSEXP);
    Rcpp::traits::input_parameter< double >::type proposal_scaling(proposal_scalingSEXP);
    Rcpp::traits::input_parameter< double >::type nugget(nuggetSEXP);
    mvn_g_adaptive(params_prop, params_cur, kernel_cov, proposal_scaling, nugget);
    return R_NilValue;
END_RCPP
}
// mvn_rw
void mvn_rw(arma::rowvec& params_prop, const arma::rowvec& params_cur, const arma::mat& sigma_chol);
RcppExport SEXP _stemr_mvn_rw(SEXP params_propSEXP, SEXP params_curSEXP, SEXP sigma_cholSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec& >::type params_prop(params_propSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type params_cur(params_curSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sigma_chol(sigma_cholSEXP);
    mvn_rw(params_prop, params_cur, sigma_chol);
    return R_NilValue;
END_RCPP
}
// propose_lna
Rcpp::List propose_lna(const arma::rowvec& lna_times, const Rcpp::NumericMatrix& lna_pars, const int init_start, const Rcpp::LogicalVector& param_update_inds, const arma::mat& stoich_matrix, SEXP lna_pointer, SEXP set_pars_pointer);
RcppExport SEXP _stemr_propose_lna(SEXP lna_timesSEXP, SEXP lna_parsSEXP, SEXP init_startSEXP, SEXP param_update_indsSEXP, SEXP stoich_matrixSEXP, SEXP lna_pointerSEXP, SEXP set_pars_pointerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::rowvec& >::type lna_times(lna_timesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type lna_pars(lna_parsSEXP);
    Rcpp::traits::input_parameter< const int >::type init_start(init_startSEXP);
    Rcpp::traits::input_parameter< const Rcpp::LogicalVector& >::type param_update_inds(param_update_indsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type stoich_matrix(stoich_matrixSEXP);
    Rcpp::traits::input_parameter< SEXP >::type lna_pointer(lna_pointerSEXP);
    Rcpp::traits::input_parameter< SEXP >::type set_pars_pointer(set_pars_pointerSEXP);
    rcpp_result_gen = Rcpp::wrap(propose_lna(lna_times, lna_pars, init_start, param_update_inds, stoich_matrix, lna_pointer, set_pars_pointer));
    return rcpp_result_gen;
END_RCPP
}
// rate_update_event
void rate_update_event(Rcpp::LogicalVector& rate_inds, const Rcpp::LogicalMatrix& M, int event_code);
RcppExport SEXP _stemr_rate_update_event(SEXP rate_indsSEXP, SEXP MSEXP, SEXP event_codeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::LogicalVector& >::type rate_inds(rate_indsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::LogicalMatrix& >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type event_code(event_codeSEXP);
    rate_update_event(rate_inds, M, event_code);
    return R_NilValue;
END_RCPP
}
// rate_update_tcovar
void rate_update_tcovar(Rcpp::LogicalVector& rate_inds, const arma::mat& M, const arma::rowvec I);
RcppExport SEXP _stemr_rate_update_tcovar(SEXP rate_indsSEXP, SEXP MSEXP, SEXP ISEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::LogicalVector& >::type rate_inds(rate_indsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec >::type I(ISEXP);
    rate_update_tcovar(rate_inds, M, I);
    return R_NilValue;
END_RCPP
}
// retrieve_census_path
void retrieve_census_path(arma::mat& censusmat, Rcpp::NumericMatrix& path, Rcpp::NumericVector& census_times, Rcpp::IntegerVector& census_columns);
RcppExport SEXP _stemr_retrieve_census_path(SEXP censusmatSEXP, SEXP pathSEXP, SEXP census_timesSEXP, SEXP census_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type censusmat(censusmatSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type census_times(census_timesSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type census_columns(census_columnsSEXP);
    retrieve_census_path(censusmat, path, census_times, census_columns);
    return R_NilValue;
END_RCPP
}
// simulate_r_measure
Rcpp::NumericMatrix simulate_r_measure(Rcpp::NumericMatrix& censusmat, Rcpp::LogicalMatrix& measproc_indmat, Rcpp::NumericVector& parameters, Rcpp::NumericVector& constants, Rcpp::NumericMatrix& tcovar, SEXP r_measure_ptr);
RcppExport SEXP _stemr_simulate_r_measure(SEXP censusmatSEXP, SEXP measproc_indmatSEXP, SEXP parametersSEXP, SEXP constantsSEXP, SEXP tcovarSEXP, SEXP r_measure_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type censusmat(censusmatSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalMatrix& >::type measproc_indmat(measproc_indmatSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type constants(constantsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type tcovar(tcovarSEXP);
    Rcpp::traits::input_parameter< SEXP >::type r_measure_ptr(r_measure_ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(simulate_r_measure(censusmat, measproc_indmat, parameters, constants, tcovar, r_measure_ptr));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_stemr_build_census_path", (DL_FUNC) &_stemr_build_census_path, 3},
    {"_stemr_CALL_D_MEASURE", (DL_FUNC) &_stemr_CALL_D_MEASURE, 9},
    {"_stemr_CALL_INTEGRATE_STEM_LNA", (DL_FUNC) &_stemr_CALL_INTEGRATE_STEM_LNA, 5},
    {"_stemr_CALL_RATE_FCN", (DL_FUNC) &_stemr_CALL_RATE_FCN, 7},
    {"_stemr_CALL_R_MEASURE", (DL_FUNC) &_stemr_CALL_R_MEASURE, 8},
    {"_stemr_CALL_SET_LNA_PARAMS", (DL_FUNC) &_stemr_CALL_SET_LNA_PARAMS, 2},
    {"_stemr_census_lna", (DL_FUNC) &_stemr_census_lna, 7},
    {"_stemr_compute_incidence", (DL_FUNC) &_stemr_compute_incidence, 3},
    {"_stemr_convert_lna2", (DL_FUNC) &_stemr_convert_lna2, 4},
    {"_stemr_pars2lnapars", (DL_FUNC) &_stemr_pars2lnapars, 2},
    {"_stemr_copy_elem", (DL_FUNC) &_stemr_copy_elem, 3},
    {"_stemr_copy_vec", (DL_FUNC) &_stemr_copy_vec, 2},
    {"_stemr_copy_mat", (DL_FUNC) &_stemr_copy_mat, 2},
    {"_stemr_copy_col", (DL_FUNC) &_stemr_copy_col, 3},
    {"_stemr_copy_2_rows", (DL_FUNC) &_stemr_copy_2_rows, 3},
    {"_stemr_c_rw_adaptive", (DL_FUNC) &_stemr_c_rw_adaptive, 6},
    {"_stemr_c_rw", (DL_FUNC) &_stemr_c_rw, 4},
    {"_stemr_evaluate_d_measure", (DL_FUNC) &_stemr_evaluate_d_measure, 8},
    {"_stemr_evaluate_d_measure_LNA", (DL_FUNC) &_stemr_evaluate_d_measure_LNA, 12},
    {"_stemr_simulate_gillespie", (DL_FUNC) &_stemr_simulate_gillespie, 10},
    {"_stemr_find_interval", (DL_FUNC) &_stemr_find_interval, 4},
    {"_stemr_g_prop2c_prop", (DL_FUNC) &_stemr_g_prop2c_prop, 3},
    {"_stemr_lna_density2", (DL_FUNC) &_stemr_lna_density2, 7},
    {"_stemr_lna_density", (DL_FUNC) &_stemr_lna_density, 7},
    {"_stemr_lna_incid2prev", (DL_FUNC) &_stemr_lna_incid2prev, 3},
    {"_stemr_map_draws_2_lna", (DL_FUNC) &_stemr_map_draws_2_lna, 9},
    {"_stemr_rmvtn", (DL_FUNC) &_stemr_rmvtn, 3},
    {"_stemr_dmvtn", (DL_FUNC) &_stemr_dmvtn, 4},
    {"_stemr_mvn_c_adaptive", (DL_FUNC) &_stemr_mvn_c_adaptive, 6},
    {"_stemr_mvn_g_adaptive", (DL_FUNC) &_stemr_mvn_g_adaptive, 5},
    {"_stemr_mvn_rw", (DL_FUNC) &_stemr_mvn_rw, 3},
    {"_stemr_propose_lna", (DL_FUNC) &_stemr_propose_lna, 7},
    {"_stemr_rate_update_event", (DL_FUNC) &_stemr_rate_update_event, 3},
    {"_stemr_rate_update_tcovar", (DL_FUNC) &_stemr_rate_update_tcovar, 3},
    {"_stemr_retrieve_census_path", (DL_FUNC) &_stemr_retrieve_census_path, 4},
    {"_stemr_simulate_r_measure", (DL_FUNC) &_stemr_simulate_r_measure, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_stemr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
