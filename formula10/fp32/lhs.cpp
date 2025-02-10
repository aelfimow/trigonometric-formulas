#include "fp32.h"
#include "lhs.h"

#include <cmath>

fp32 lhs(fp32 alpha, fp32 beta)
{
    fp32 const result = tanf(alpha + beta);

    return result;
}
