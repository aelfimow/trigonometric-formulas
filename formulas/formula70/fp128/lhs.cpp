#include "fp128.h"
#include "lhs.h"

#include <quadmath.h>

/**
 * Left Hand Side:
 *
 * @f[
 *     \cos{\alpha} + \cos{\beta}
 * @f]
 */
fp128 lhs(fp128 alpha, fp128 beta)
{
    fp128 const a = cosq(alpha);
    fp128 const b = cosq(beta);

    fp128 const result = (a + b);

    return result;
}
