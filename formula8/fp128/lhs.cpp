#include "fp128.h"
#include "lhs.h"

#include <quadmath.h>

fp128 lhs(fp128 alpha, fp128 beta)
{
    fp128 const result = cosq(alpha + beta);

    return result;
}
