#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

fp128 rhs(fp128 alpha, fp128 beta)
{
    fp128 const a = tanq(alpha);
    fp128 const b = tanq(beta);

    fp128 const result = (a + b) / (1.0Q - (a * b));

    return result;
}
