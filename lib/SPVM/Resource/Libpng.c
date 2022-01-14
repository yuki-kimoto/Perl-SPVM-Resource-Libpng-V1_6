#include "spvm_native.h"

#include <math.h>
#include <fenv.h>
#include <complex.h>

#include <png.h>

static const char* MFILE = "SPVM/Math.c";

int32_t SPVM__Resource__Libpng__dummy(SPVM_ENV* env, SPVM_VALUE* stack) {
  (void)env;
  
  png_colorp palette;

  stack[0].ival = 1;
  
  return 0;
}
