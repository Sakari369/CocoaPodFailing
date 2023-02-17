#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#define FFI_PLUGIN_EXPORT

FFI_PLUGIN_EXPORT intptr_t vendored_function(intptr_t a);
