% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{simulate_gillespie}
\alias{simulate_gillespie}
\title{Simulate a stochastic epidemic model path via Gillespie's direct method and
returns a matrix containing a simulated path from a stochastic epidemic
model.}
\usage{
simulate_gillespie(flow, parameters, constants, tcovar, t_max, init_states,
  rate_adjmat, tcovar_adjmat, tcovar_changemat, init_dims, forcing_inds,
  forcing_tcov_inds, forcings_out, forcing_transfers, rate_ptr)
}
\arguments{
\item{flow}{Flow matrix}

\item{parameters}{Vector of parameters}

\item{constants}{vector of constants}

\item{tcovar}{matrix of time-varying covariates}

\item{init_states}{vector of initial compartment counts}

\item{rate_adjmat}{adjacency matrix for updating rates after each event}

\item{tcovar_adjmat}{adjacency matrix for updating rates after each time a
covariate changes}

\item{tcovar_changemat}{indicator matrix identifying which covariates change
at each time}

\item{init_dims}{initial estimate for dimensions of the bookkeeping matrix,
calculated as sum_strata(stratum size x number states x 3), rounded to the
next greatest power of 2.}

\item{forcing_inds}{logical vector of indicating at which times in the
time-varying covariance matrix a forcing is applied.}

\item{rate_ptr}{external function pointer to the lumped rate functions.}

\item{forcing_matrix}{matrix containing the forcings.}
}
\value{
matrix with a simulated path from a stochastic epidemic model.
}
\description{
Simulate a stochastic epidemic model path via Gillespie's direct method and
returns a matrix containing a simulated path from a stochastic epidemic
model.
}
