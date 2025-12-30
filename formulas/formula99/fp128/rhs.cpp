#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{1}{2}(1 + \cos{2\alpha})
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const a = cosq(2.0Q * x);

    fp128 const result = (1.0Q / 2.0Q) * (1.0Q + a);

    return result;
}
