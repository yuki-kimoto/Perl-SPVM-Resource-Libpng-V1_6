#include "spvm_native.h"

#include <math.h>
#include <fenv.h>
#include <complex.h>

static const char* MFILE = "SPVM/Math.c";

int32_t SPVM__Resource__Libpng__V1_6__dummy(SPVM_ENV* env, SPVM_VALUE* stack) {
  (void)env;
  
  stack[0].ival = 1;
  
  return 0;
}
