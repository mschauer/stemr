% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/stem_measure.R
\name{stem_measure}
\alias{stem_measure}
\title{Generate a list of objects governing the measurement process for a stochastic
epidemic model.}
\usage{
stem_measure(emissions, dynamics, data = NULL, messages = TRUE)
}
\arguments{
\item{emissions}{list of emmision lists, each generated by a call to the
\code{\link{emission}} function.}

\item{dynamics}{processed list of objects governing the model dynamics,
returned by the \code{\link{stem_dynamics}} function.}

\item{data}{matrix/data frame, or a list of matrices/data frames. All columns
must be named according to which compartment_strata are measured. The first
column must consist of observation times, t_1,...,t_L. If data on all
measured compartments are accrued at the same observation times, a single
matrix or data frame may be provided. If each compartment in the data was
measured at different observation times, a list of matrices or data frames
must be provided. Again, the first column of each matrix must consist of
observation times, while subsequent columns must be labeled according to
which compartment being measured.}

\item{messages}{should compilation messages be printed? defaults to true.}
}
\value{
list with evaluated measurement process functions and objects. The
  list contains the following objects: \describe{\item{meas_procs}{list of
  parsed measurement process functions} \item{meas_pointers}{external
  pointers to compiled functions to simulate from and evaluate the density of
  the measurement process} \item{obstimes}{complete vector of observation
  times} \item{obstime_inds}{list of indices (C++) of observation times for
  each of the measurement variables} \item{obsmat}{either a template for an
  observation matrix, or an observation matrix that combines the supplied
  list of observation matrices} \item{obscomp_codes}{named numeric vector of
  measurement variable codes} \item{measproc_indmat}{indicator matrix for
  which measurement variables are measured at which observation times}
  \item{meas_inds}{indices (C++) of elements in the observation matrix that
  correspond to measurements (non-NAs)} \item{censusmat}{template matrix for
  storing the compartment counts at observation times}
  \item{tcovar_censmat}{matrix with time-varying coviates censused at
  observation times} \item{lna_prevalence}{indicator for whether prevalence
  is computed in the LNA} \item{lna_incidence}{indicator for whether
  incidence is computed in the LNA} \item{incidence_codes_lna}{C++ column
  indices for LNA count processes on transition events for which incidence is
  to be computed}}
}
\description{
Generate a list of objects governing the measurement process for a stochastic
epidemic model.
}
