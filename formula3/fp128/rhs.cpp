#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

fp128 rhs(fp128 x)
{
    fp128 const a = cosq(x);
    fp128 const b = sinq(x);

    fp128 const result = (a / b);

    return result;
}
