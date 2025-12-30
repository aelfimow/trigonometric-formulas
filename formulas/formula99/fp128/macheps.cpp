#include "fp128.h"
#include "macheps.h"

#include <quadmath.h>

fp128 macheps()
{
    return FLT128_EPSILON;
}
