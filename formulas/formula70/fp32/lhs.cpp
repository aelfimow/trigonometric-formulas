#include "fp32.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \cos{\alpha} + \cos{\beta}
 * @f]
 */
fp32 lhs(fp32 alpha, fp32 beta)
{
    fp32 const a = cosf(alpha);
    fp32 const b = cosf(beta);

    fp32 const result = (a + b);

    return result;
}
