#include <stdio.h>

int main(int argc, char const *argv[]) {
  const double pi = 3.141592654;
  typedef const int cint;
  
  /* pf points to a constant float value */
  const float *pf;

  /* pt is a const pointer */
  float* const pt;

  return 0;
}