#include "fp32.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \sin{\alpha} \sin{\beta} \sin{\gamma}
 * @f]
 */
fp32 lhs(fp32 alpha, fp32 beta, fp32 gamma)
{
    fp32 const a = sinf(alpha);
    fp32 const b = sinf(beta);
    fp32 const g = sinf(gamma);

    fp32 const result = (a * b * g);

    return result;
}
