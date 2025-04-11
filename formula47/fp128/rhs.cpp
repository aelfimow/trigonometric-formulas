#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sqrt{\frac{1 + \cos{\alpha}}{1 - \cos{\alpha}}}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const a = cosq(x);

    fp128 const result = sqrtq((1.0Q + a) / (1.0Q - a));

    return result;
}
