#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

fp128 rhs(fp128 alpha, fp128 beta)
{
    fp128 const a = cosq(beta);
    fp128 const b = sinq(alpha);

    fp128 const result = (a * a) - (b * b);

    return result;
}
