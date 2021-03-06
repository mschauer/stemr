<!-- README.md is generated from README.Rmd. Please edit that file -->
stemr
=====

Baysian Inference for Stochastic Epidemic Models via the Linear Noise Approximation
-----------------------------------------------------------------------------------

The **stemr** R package implements a Bayesian data augmentation
algorithm for fitting stochastic epidemic models (SEMs) with arbitrary
dynamics to partially observed epidemic count data via the linear noise
approximation (LNA). This repository and package exist to expose and
archive the code used in the paper, “A Linear Noise Approximation for
Stochastic Epidemic Models Fit to Partially Observed Incidence Counts”
by J. Fintzi, J. Wakefield, and V.N. Minin. The package provides
facilities for exact simulation of SEMs via Gillespie’s direct
algorithm, and for simulation of approximate epidemic paths via the LNA.
Inference is carried out using a Bayesian data augmentation algorithm.
LNA paths are sampled via the elliptical slice sampling algorithm of
Murray et al. (2010), and the package offers several choices for
adaptive and fixed kernel MCMC algorithms for parameter updates. The
package also allows for time varying covariates, time varying
parameters, and deterministic forcings. These functionalities are not
yet fully documented, but sample code is available in the ‘/inst’
directory on the GitHub repository.

Package installation
--------------------

This package may be installed directly from GitHub using the
**devtools** package. **IMPORTANT** It is critical that the package is
installed with byte compilation disabled. The package will not work
properly when byte compiled, which is the default since R 3.4.

    library(devtools)
    install_github("fintzij/stemr", build_vignettes=TRUE, build_opts = c("--no-byte-compile")) 
    library(stemr)

Vignettes
---------

There are two vignettes included in this package to help familiarize
users with its basic functionality and that reproduce models the SEMs
fit via the LNA in Fintzi, et al. (2020). The `stemr_sir` vignette
provides an introduction to the `stemr` package, and demonstrates how to
simulate from and fit an SIR model via the LNA and ODE. The
`ebola_westafrica` vignette demonstrates how to simulate from and fit a
multi-country model for Ebola transmission, and then provides code to
fit the model to data from the 2014-2015 outbreak in West Africa. Both
vignettes also include annotated `pomp` code for fitting the respective
models (version 1.17 was used as a benchmark in the paper). The
vignettes may be accessed as follows:

    vignette("stemr_sir")         
    vignette("ebola_westafrica")
