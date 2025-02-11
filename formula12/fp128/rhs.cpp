#include "fp128.h"
#include "rhs.h"
#include "cotq.h"


fp128 rhs(fp128 alpha, fp128 beta)
{
    fp128 const a = cotq(alpha);
    fp128 const b = cotq(beta);

    fp128 const result = ((a * b) - 1.0Q) / (b + a);

    return result;
}
