#include "vendored_lib.h"

FFI_PLUGIN_EXPORT intptr_t vendored_function(intptr_t a) {
  printf("vendored_function been called mon! a = %ld", a);

  return a * 32;
}
