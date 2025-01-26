#include "fp128.h"
#include "lhs.h"

#include <quadmath.h>

fp128 lhs(fp128 x)
{
    fp128 const x1 = sinq(x);
    fp128 const x2 = cosq(x);

    fp128 const result = (x1 * x1) + (x2 * x2);

    return result;
}
