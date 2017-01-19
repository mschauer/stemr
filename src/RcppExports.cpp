// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "stemr_types.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// CALL_D_MEASURE
void CALL_D_MEASURE(Rcpp::NumericMatrix& emitmat, const Rcpp::LogicalVector& emit_inds, const int record_ind, const Rcpp::NumericVector& record, const Rcpp::NumericVector& state, const Rcpp::NumericVector& parameters, const Rcpp::NumericVector& constants, const Rcpp::NumericVector& tcovar, SEXP d_meas_ptr);
RcppExport SEXP stemr_CALL_D_MEASURE(SEXP emitmatSEXP, SEXP emit_indsSEXP, SEXP record_indSEXP, SEXP recordSEXP, SEXP stateSEXP, SEXP parametersSEXP, SEXP constantsSEXP, SEXP tcovarSEXP, SEXP d_meas_ptrSEXP) {
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
RcppExport SEXP stemr_CALL_INTEGRATE_STEM_LNA(SEXP initSEXP, SEXP startSEXP, SEXP endSEXP, SEXP step_sizeSEXP, SEXP lna_ode_ptrSEXP) {
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
RcppExport SEXP stemr_CALL_RATE_FCN(SEXP ratesSEXP, SEXP indsSEXP, SEXP stateSEXP, SEXP parametersSEXP, SEXP constantsSEXP, SEXP tcovarSEXP, SEXP rate_ptrSEXP) {
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
RcppExport SEXP stemr_CALL_R_MEASURE(SEXP obsmatSEXP, SEXP emit_indsSEXP, SEXP record_indSEXP, SEXP stateSEXP, SEXP parametersSEXP, SEXP constantsSEXP, SEXP tcovarSEXP, SEXP r_meas_ptrSEXP) {
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
RcppExport SEXP stemr_CALL_SET_LNA_PARAMS(SEXP pSEXP, SEXP set_lna_params_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type p(pSEXP);
    Rcpp::traits::input_parameter< SEXP >::type set_lna_params_ptr(set_lna_params_ptrSEXP);
    CALL_SET_LNA_PARAMS(p, set_lna_params_ptr);
    return R_NilValue;
END_RCPP
}
// build_census_path
arma::mat build_census_path(Rcpp::NumericMatrix& path, Rcpp::NumericVector& census_times, Rcpp::IntegerVector& census_columns);
RcppExport SEXP stemr_build_census_path(SEXP pathSEXP, SEXP census_timesSEXP, SEXP census_columnsSEXP) {
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
// census_lna
void census_lna(const arma::mat& path, arma::mat& census_path, const arma::uvec& census_inds, const arma::mat& flow_matrix_lna, bool do_prevalence, const arma::rowvec& init_state, const arma::uvec& incidence_codes_lna);
RcppExport SEXP stemr_census_lna(SEXP pathSEXP, SEXP census_pathSEXP, SEXP census_indsSEXP, SEXP flow_matrix_lnaSEXP, SEXP do_prevalenceSEXP, SEXP init_stateSEXP, SEXP incidence_codes_lnaSEXP) {
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
RcppExport SEXP stemr_compute_incidence(SEXP censusmatSEXP, SEXP col_indsSEXP, SEXP row_indsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type censusmat(censusmatSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type col_inds(col_indsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type row_inds(row_indsSEXP);
    compute_incidence(censusmat, col_inds, row_inds);
    return R_NilValue;
END_RCPP
}
// convert_lna
arma::mat convert_lna(const arma::mat& path, const arma::mat& flow_matrix, const arma::rowvec& init_state);
RcppExport SEXP stemr_convert_lna(SEXP pathSEXP, SEXP flow_matrixSEXP, SEXP init_stateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type flow_matrix(flow_matrixSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type init_state(init_stateSEXP);
    rcpp_result_gen = Rcpp::wrap(convert_lna(path, flow_matrix, init_state));
    return rcpp_result_gen;
END_RCPP
}
// convert_lna2
void convert_lna2(const arma::mat& path, const arma::mat& flow_matrix, const arma::rowvec& init_state, arma::mat& statemat);
RcppExport SEXP stemr_convert_lna2(SEXP pathSEXP, SEXP flow_matrixSEXP, SEXP init_stateSEXP, SEXP statematSEXP) {
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
// evaluate_d_measure
void evaluate_d_measure(Rcpp::NumericMatrix& emitmat, const Rcpp::NumericMatrix& obsmat, const Rcpp::NumericMatrix& statemat, const Rcpp::LogicalMatrix& measproc_indmat, const Rcpp::NumericVector& parameters, const Rcpp::NumericVector& constants, const Rcpp::NumericMatrix& tcovar_censusmat, SEXP d_meas_ptr);
RcppExport SEXP stemr_evaluate_d_measure(SEXP emitmatSEXP, SEXP obsmatSEXP, SEXP statematSEXP, SEXP measproc_indmatSEXP, SEXP parametersSEXP, SEXP constantsSEXP, SEXP tcovar_censusmatSEXP, SEXP d_meas_ptrSEXP) {
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
// simulate_gillespie
arma::mat simulate_gillespie(const arma::mat& flow, const Rcpp::NumericVector& parameters, const Rcpp::NumericVector& constants, const arma::mat& tcovar, const arma::rowvec& init_states, const Rcpp::LogicalMatrix& rate_adjmat, const arma::mat& tcovar_adjmat, const arma::mat& tcovar_changemat, const Rcpp::IntegerVector init_dims, SEXP rate_ptr);
RcppExport SEXP stemr_simulate_gillespie(SEXP flowSEXP, SEXP parametersSEXP, SEXP constantsSEXP, SEXP tcovarSEXP, SEXP init_statesSEXP, SEXP rate_adjmatSEXP, SEXP tcovar_adjmatSEXP, SEXP tcovar_changematSEXP, SEXP init_dimsSEXP, SEXP rate_ptrSEXP) {
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
RcppExport SEXP stemr_find_interval(SEXP xSEXP, SEXP breaksSEXP, SEXP rightmost_closedSEXP, SEXP all_insideSEXP) {
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
// lna_density
Rcpp::List lna_density(const Rcpp::List& path, const arma::colvec& lna_times, const Rcpp::NumericMatrix& lna_pars, const Rcpp::LogicalVector& param_update_inds, const arma::mat& flow_matrix, SEXP lna_pointer, SEXP set_pars_pointer);
RcppExport SEXP stemr_lna_density(SEXP pathSEXP, SEXP lna_timesSEXP, SEXP lna_parsSEXP, SEXP param_update_indsSEXP, SEXP flow_matrixSEXP, SEXP lna_pointerSEXP, SEXP set_pars_pointerSEXP) {
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
// lna_density2
Rcpp::List lna_density2(const Rcpp::List& path, const arma::colvec& lna_times, const Rcpp::NumericMatrix& lna_pars, const Rcpp::LogicalVector& param_update_inds, const arma::mat& flow_matrix, SEXP lna_pointer_ess, SEXP lna_ess_set_pars_ptr);
RcppExport SEXP stemr_lna_density2(SEXP pathSEXP, SEXP lna_timesSEXP, SEXP lna_parsSEXP, SEXP param_update_indsSEXP, SEXP flow_matrixSEXP, SEXP lna_pointer_essSEXP, SEXP lna_ess_set_pars_ptrSEXP) {
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
// rmvtn
arma::mat rmvtn(int n, const arma::rowvec& mu, const arma::mat& sigma);
RcppExport SEXP stemr_rmvtn(SEXP nSEXP, SEXP muSEXP, SEXP sigmaSEXP) {
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
RcppExport SEXP stemr_dmvtn(SEXP xSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP logdSEXP) {
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
// mvn_rw
void mvn_rw(arma::rowvec& params_prop, const arma::rowvec& params_cur, const arma::mat& cov_chol);
RcppExport SEXP stemr_mvn_rw(SEXP params_propSEXP, SEXP params_curSEXP, SEXP cov_cholSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec& >::type params_prop(params_propSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type params_cur(params_curSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type cov_chol(cov_cholSEXP);
    mvn_rw(params_prop, params_cur, cov_chol);
    return R_NilValue;
END_RCPP
}
// pars2lnapars
void pars2lnapars(arma::mat& lnapars, const arma::rowvec& parameters);
RcppExport SEXP stemr_pars2lnapars(SEXP lnaparsSEXP, SEXP parametersSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type lnapars(lnaparsSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type parameters(parametersSEXP);
    pars2lnapars(lnapars, parameters);
    return R_NilValue;
END_RCPP
}
// propose_lna
Rcpp::List propose_lna(const arma::colvec& lna_times, const Rcpp::NumericMatrix& lna_pars, const Rcpp::LogicalVector& param_update_inds, const arma::mat& flow_matrix, SEXP lna_pointer, SEXP set_pars_pointer, bool enforce_monotonicity);
RcppExport SEXP stemr_propose_lna(SEXP lna_timesSEXP, SEXP lna_parsSEXP, SEXP param_update_indsSEXP, SEXP flow_matrixSEXP, SEXP lna_pointerSEXP, SEXP set_pars_pointerSEXP, SEXP enforce_monotonicitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type lna_times(lna_timesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type lna_pars(lna_parsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::LogicalVector& >::type param_update_inds(param_update_indsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type flow_matrix(flow_matrixSEXP);
    Rcpp::traits::input_parameter< SEXP >::type lna_pointer(lna_pointerSEXP);
    Rcpp::traits::input_parameter< SEXP >::type set_pars_pointer(set_pars_pointerSEXP);
    Rcpp::traits::input_parameter< bool >::type enforce_monotonicity(enforce_monotonicitySEXP);
    rcpp_result_gen = Rcpp::wrap(propose_lna(lna_times, lna_pars, param_update_inds, flow_matrix, lna_pointer, set_pars_pointer, enforce_monotonicity));
    return rcpp_result_gen;
END_RCPP
}
// propose_lna_ess
Rcpp::List propose_lna_ess(Rcpp::List& path_cur, const arma::colvec& lna_times, const Rcpp::NumericMatrix& lna_pars, const Rcpp::LogicalVector& param_update_inds, const arma::mat& flow_matrix, SEXP lna_pointer_ess, SEXP lna_ess_set_pars_ptr);
RcppExport SEXP stemr_propose_lna_ess(SEXP path_curSEXP, SEXP lna_timesSEXP, SEXP lna_parsSEXP, SEXP param_update_indsSEXP, SEXP flow_matrixSEXP, SEXP lna_pointer_essSEXP, SEXP lna_ess_set_pars_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type path_cur(path_curSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type lna_times(lna_timesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type lna_pars(lna_parsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::LogicalVector& >::type param_update_inds(param_update_indsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type flow_matrix(flow_matrixSEXP);
    Rcpp::traits::input_parameter< SEXP >::type lna_pointer_ess(lna_pointer_essSEXP);
    Rcpp::traits::input_parameter< SEXP >::type lna_ess_set_pars_ptr(lna_ess_set_pars_ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(propose_lna_ess(path_cur, lna_times, lna_pars, param_update_inds, flow_matrix, lna_pointer_ess, lna_ess_set_pars_ptr));
    return rcpp_result_gen;
END_RCPP
}
// rate_update_event
void rate_update_event(Rcpp::LogicalVector& rate_inds, const Rcpp::LogicalMatrix& M, int event_code);
RcppExport SEXP stemr_rate_update_event(SEXP rate_indsSEXP, SEXP MSEXP, SEXP event_codeSEXP) {
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
RcppExport SEXP stemr_rate_update_tcovar(SEXP rate_indsSEXP, SEXP MSEXP, SEXP ISEXP) {
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
RcppExport SEXP stemr_retrieve_census_path(SEXP censusmatSEXP, SEXP pathSEXP, SEXP census_timesSEXP, SEXP census_columnsSEXP) {
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
// to_estimation_scale
void to_estimation_scale(Rcpp::NumericVector& natural_params, Rcpp::NumericVector& scaled_params, Rcpp::CharacterVector& scales);
RcppExport SEXP stemr_to_estimation_scale(SEXP natural_paramsSEXP, SEXP scaled_paramsSEXP, SEXP scalesSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type natural_params(natural_paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type scaled_params(scaled_paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector& >::type scales(scalesSEXP);
    to_estimation_scale(natural_params, scaled_params, scales);
    return R_NilValue;
END_RCPP
}
// from_estimation_scale
void from_estimation_scale(Rcpp::NumericVector& natural_params, Rcpp::NumericVector& scaled_params, Rcpp::CharacterVector& scales);
RcppExport SEXP stemr_from_estimation_scale(SEXP natural_paramsSEXP, SEXP scaled_paramsSEXP, SEXP scalesSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type natural_params(natural_paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type scaled_params(scaled_paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector& >::type scales(scalesSEXP);
    from_estimation_scale(natural_params, scaled_params, scales);
    return R_NilValue;
END_RCPP
}
// simulate_r_measure
Rcpp::NumericMatrix simulate_r_measure(Rcpp::NumericMatrix& censusmat, Rcpp::LogicalMatrix& measproc_indmat, Rcpp::NumericVector& parameters, Rcpp::NumericVector& constants, Rcpp::NumericMatrix& tcovar, SEXP r_measure_ptr);
RcppExport SEXP stemr_simulate_r_measure(SEXP censusmatSEXP, SEXP measproc_indmatSEXP, SEXP parametersSEXP, SEXP constantsSEXP, SEXP tcovarSEXP, SEXP r_measure_ptrSEXP) {
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
