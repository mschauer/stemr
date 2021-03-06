% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/ess_settings.R
\name{ess_settings}
\alias{ess_settings}
\title{Generates a list of settings for sampling the latent LNA paths and
time-varying parameters via elliptical slice sampling.}
\usage{
ess_settings(n_ess_updates = 1, n_initdist_updates = 1,
  n_tparam_updates = 1, lna_bracket_width = 2 * pi,
  initdist_bracket_width = 2 * pi, tparam_bracket_width = 2 * pi,
  lna_bracket_update = 0, initdist_bracket_update = 0,
  tparam_bracket_update = 0, lna_bracket_scaling = 2 * sqrt(2 *
  log(10)), initdist_bracket_scaling = 2 * sqrt(2 * log(10)),
  tparam_bracket_scaling = 2 * sqrt(2 * log(10)),
  joint_tparam_update = TRUE, joint_initdist_update = TRUE,
  ess_warmup = 50)
}
\arguments{
\item{n_ess_updates, n_initdist_updates, n_tparam_updates}{number of elliptical
slice sampling updates per MCMC iteration, defaults to 1.}

\item{lna_bracket_width, initdist_bracket_width, tparam_bracket_widths}{width
of the elliptical slice sampling brackets, must be in (0,2*pi], and default
to 2*pi.}

\item{lna_bracket_update, initdist_bracket_update, tparam_bracket_update}{iterations at which the widths of the respective elliptical slice sampling
brackets should be shrunk, defaults to 0 and the bracket widths are kept
constant.}

\item{lna_bracket_scaling, initdist_bracket_scaling, tparam_bracket_scaling}{Scaling factors for elliptical slice sampling bracket widths. If brackets
are to be shrunk, the new width is set to the minimum of 2*pi or the
scaling multiplied by the standard deviation of the previous ESS angles.
The scalings default to the full width at one tenth maximum for a gaussian.}

\item{joint_tparam_update}{either TRUE (default) if time-varying parameter
values should be updated in an ESS step jointly with the LNA path, or FALSE
if time-varying parameters should be updated in their own block.}

\item{joint_initdist_update}{either TRUE (default) if initial compartment
volumes should be updated in an ESS step jointly with the LNA path, or
FALSE if initial compartment volumes should be updated in their own block.
ess_bracket_step_size+1)^-ess_bracket_cooling.}

\item{ess_warmup}{ess_warmup ESS updates prior to starting MCMC}
}
\value{
list with settings for elliptical slice sampling
}
\description{
Generates a list of settings for sampling the latent LNA paths and
time-varying parameters via elliptical slice sampling.
}
