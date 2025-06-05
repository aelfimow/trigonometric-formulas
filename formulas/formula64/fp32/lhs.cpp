#include "fp32.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \tan{3\alpha}
 * @f]
 */
fp32 lhs(fp32 x)
{
    fp32 const result = tanf(3.0f * x);

    return result;
}
