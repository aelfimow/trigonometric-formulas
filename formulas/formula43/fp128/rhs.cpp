#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sqrt{\frac{1 + \cos{\alpha}}{2}}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const result = sqrtq((1.0Q + cosq(x)) / 2.0Q);

    return result;
}
