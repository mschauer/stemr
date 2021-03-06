// [[Rcpp::depends(RcppArmadillo)]]
#include <RcppArmadillo.h>

using namespace Rcpp;
using namespace arma;

//' Random walk Metropolis-Hastings transition kernel.
//'
//' @param params_prop vector in which the proposed parameters should be stored
//' @param params_cur vector containing the current parameter vector
//' @param sigma_chol upper triangular portion of the Cholesky decomposition of
//'   the proposal covariance matrix
//'
//' @return propose new parameter values in place
//' @export
// [[Rcpp::export]]
void mvn_rw(arma::rowvec& params_prop, const arma::rowvec& params_cur, const arma::mat& sigma_chol) {

        int par_dim = params_cur.n_elem;
        params_prop = params_cur + Rcpp::as<arma::rowvec>(Rcpp::rnorm(par_dim)) * sigma_chol;

}