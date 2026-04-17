// Minimal f2c.h stub for building TRACMT with system LAPACK/BLAS (g++/clang++).
// Use this instead of the CLAPACK f2c.h when linking against the system LAPACK
// (e.g. liblapack-dev on Ubuntu, or OpenBLAS on Windows/MSYS2).
//
// The key difference: system LAPACK uses 32-bit integers (int), whereas CLAPACK's
// f2c.h typedef'd "integer" as "long int" (64-bit on LP64 systems).
// Using int here matches the actual integer size that Fortran LAPACK expects.

#ifndef F2C_H_CI_STUB
#define F2C_H_CI_STUB

typedef int    integer;
typedef double doublereal;
typedef float  real;
typedef int    logical;
typedef int    ftnlen;

#endif // F2C_H_CI_STUB
