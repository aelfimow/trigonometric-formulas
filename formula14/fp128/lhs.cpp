#include "fp128.h"
#include "lhs.h"

#include <quadmath.h>

fp128 lhs(fp128 alpha, fp128 beta)
{
    fp128 const a = sinq(alpha + beta);
    fp128 const b = sinq(alpha - beta);

    fp128 const result = (a * b);

    return result;
}
