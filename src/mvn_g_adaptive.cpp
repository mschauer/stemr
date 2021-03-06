// [[Rcpp::depends(RcppArmadillo)]]
#include <RcppArmadillo.h>

using namespace Rcpp;
using namespace arma;

//' Global Metropolis random walk with global adaptive scaling
//'
//' @param params_prop vector in which the proposed parameters should be stored
//' @param params_cur vector containing the current parameter vector
//' @param kernel_cov_chol cholesky of the kernel covariance
//' @param nugget fixed covariance nugget contribution
//'
//' @return propose new parameter values in place
//' @export
// [[Rcpp::export]]
void mvn_g_adaptive(arma::rowvec& params_prop,
                    const arma::rowvec& params_cur,
                    const arma::mat& kernel_cov_chol,
                    double nugget) {

        int par_dim = params_cur.n_elem;

        params_prop = params_cur + nugget * Rcpp::as<arma::rowvec>(Rcpp::rnorm(par_dim)) +
                (1 - nugget) * Rcpp::as<arma::rowvec>(Rcpp::rnorm(par_dim)) * kernel_cov_chol;

}