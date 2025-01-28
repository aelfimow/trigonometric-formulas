#include "fp32.h"
#include "lhs.h"

#include <cmath>

fp32 lhs(fp32 x)
{
    fp32 const result = tanf(x);

    return result;
}
