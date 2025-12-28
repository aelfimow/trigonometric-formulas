#include "fp128.h"
#include "lhs.h"

#include <quadmath.h>

/**
 * Left Hand Side:
 *
 * @f[
 *     \sin{\alpha} \sin{\beta} \cos{\gamma}
 * @f]
 */
fp128 lhs(fp128 alpha, fp128 beta, fp128 gamma)
{
    fp128 const a = sinq(alpha);
    fp128 const b = sinq(beta);
    fp128 const g = cosq(gamma);

    fp128 const result = (a * b * g);

    return result;
}
