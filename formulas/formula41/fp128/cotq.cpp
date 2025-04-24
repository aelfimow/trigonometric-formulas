#include "fp128.h"
#include "cotq.h"

#include <quadmath.h>

fp128 cotq(fp128 x)
{
    fp128 const result = (1.0Q / tanq(x));

    return result;
}
