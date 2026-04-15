// Minimal clapack.h stub for building TRACMT with system LAPACK/BLAS (g++/clang++).
// Declares only the LAPACK routines actually called by LapackInterface.cpp.
// When using this stub, link with -llapack -lblas (Linux) or -lopenblas (Windows/MSYS2).

#ifndef CLAPACK_H_CI_STUB
#define CLAPACK_H_CI_STUB

#include "f2c.h"

#ifdef __cplusplus
extern "C" {
#endif

// Query optimal block size for a named routine
// (ilaenv_ expects hidden string-length args after n4; they are not critical
//  for the name-based lookup used in LapackInterface.cpp so we omit them here)
integer ilaenv_(integer *ispec, const char *name__, const char *opts,
                integer *n1, integer *n2, integer *n3, integer *n4, ...);

// Solve real general linear system (LU)
int dgesv_(integer *n, integer *nrhs, doublereal *a, integer *lda,
           integer *ipiv, doublereal *b, integer *ldb, integer *info);

// Compute LU factorization of a general matrix
int dgetrf_(integer *m, integer *n, doublereal *a, integer *lda,
            integer *ipiv, integer *info);

// Solve using LU factorization
int dgetrs_(const char *trans, integer *n, integer *nrhs,
            doublereal *a, integer *lda, integer *ipiv,
            doublereal *b, integer *ldb, integer *info);

// Solve real symmetric indefinite linear system
int dsysv_(const char *uplo, integer *n, integer *nrhs, doublereal *a,
           integer *lda, integer *ipiv, doublereal *b, integer *ldb,
           doublereal *work, integer *lwork, integer *info);

// Compute Bunch-Kaufman factorization of a real symmetric matrix
int dsytrf_(const char *uplo, integer *n, doublereal *a, integer *lda,
            integer *ipiv, doublereal *work, integer *lwork, integer *info);

// Solve using Bunch-Kaufman factorization
int dsytrs_(const char *uplo, integer *n, integer *nrhs,
            doublereal *a, integer *lda, integer *ipiv,
            doublereal *b, integer *ldb, integer *info);

// Solve real symmetric positive-definite linear system (Cholesky)
int dposv_(const char *uplo, integer *n, integer *nrhs, doublereal *a,
           integer *lda, doublereal *b, integer *ldb, integer *info);

// Compute Cholesky factorization
int dpotrf_(const char *uplo, integer *n, doublereal *a, integer *lda,
            integer *info);

// Solve using Cholesky factorization
int dpotrs_(const char *uplo, integer *n, integer *nrhs,
            doublereal *a, integer *lda, doublereal *b, integer *ldb,
            integer *info);

// Compute eigenvalues and eigenvectors of a real symmetric matrix
int dsyev_(const char *jobz, const char *uplo, integer *n,
           doublereal *a, integer *lda, doublereal *w,
           doublereal *work, integer *lwork, integer *info);

#ifdef __cplusplus
}
#endif

#endif // CLAPACK_H_CI_STUB
