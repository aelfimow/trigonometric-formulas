#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

fp128 rhs(fp128 alpha, fp128 beta)
{
    fp128 const result = (cosq(alpha) * cosq(beta)) + (sinq(alpha) * sinq(beta));

    return result;
}
