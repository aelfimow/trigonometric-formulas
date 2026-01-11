#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{1}{4}(3\cos{\alpha} + \cos{3\alpha})
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const cos_x = cosq(x);
    fp128 const cos_3x = cosq(3.0Q * x);

    fp128 const result = (1.0Q / 4.0Q) * ((3.0Q * cos_x) + cos_3x);

    return result;
}
