#include "fp128.h"
#include "lhs.h"

#include <quadmath.h>

fp128 lhs(fp128 x)
{
    fp128 const a = (1.0Q / tanq(x));

    fp128 const result = (1.0Q + (a * a));

    return result;
}
