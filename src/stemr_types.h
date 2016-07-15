#ifndef stemr_types_h
#define stemr_types_h

#include <RcppArmadillo.h>

using namespace arma;
using namespace Rcpp;

typedef void(*ratefcn_ptr)(Rcpp::NumericVector& rates, const Rcpp::LogicalVector& inds,
             const arma::rowvec& state, const Rcpp::NumericVector& parameters,
             const Rcpp::NumericVector& constants, const arma::rowvec& tcovar);

typedef void(*d_measure_ptr)(Rcpp::NumericMatrix& emitmat, const Rcpp::LogicalVector& emit_inds,
             const int record_ind, const arma::rowvec& record, const arma::rowvec& state,
             const Rcpp::NumericVector& parameters, const Rcpp::NumericVector& constants,
             const arma::rowvec& tcovar);

typedef void(*r_measure_ptr)(Rcpp::NumericMatrix& obsmat, const Rcpp::LogicalVector& emit_inds,
             const int record_ind, const arma::rowvec& state, const Rcpp::NumericVector& parameters,
             const Rcpp::NumericVector& constants, const arma::rowvec& tcovar);


#endif