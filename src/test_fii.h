#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#include "vendored_lib/vendored_lib.h"

#define FFI_PLUGIN_EXPORT

FFI_PLUGIN_EXPORT intptr_t vendored_function(intptr_t a);

FFI_PLUGIN_EXPORT intptr_t sum(intptr_t a, intptr_t b);
FFI_PLUGIN_EXPORT intptr_t sum_long_running(intptr_t a, intptr_t b);
