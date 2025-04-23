#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sqrt{\frac{1 - \cos{2\alpha}}{1 + \cos{2\alpha}}}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const a = cosq(2.0Q * x);

    fp128 const result = sqrtq((1.0Q - a) / (1.0Q + a));

    return result;
}
