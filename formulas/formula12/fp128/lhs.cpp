#include "fp128.h"
#include "lhs.h"
#include "cotq.h"


fp128 lhs(fp128 alpha, fp128 beta)
{
    fp128 const result = cotq(alpha + beta);

    return result;
}
