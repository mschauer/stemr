% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{comp_chol}
\alias{comp_chol}
\title{Cholesky decomposition}
\usage{
comp_chol(C, M)
}
\arguments{
\item{C}{matrix to be filled out with the cholesky of M}

\item{M}{symmetric positive definite matrix for which the upper triangle of the cholesky 
is to be computed}

\item{nugget}{small positive constant to be added to the diagonal for numerical stability}
}
\value{
set C equal to the matrix square root of M
}
\description{
Cholesky decomposition
}
