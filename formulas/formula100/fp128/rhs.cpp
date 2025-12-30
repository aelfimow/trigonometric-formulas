#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{1}{4}(3\sin{\alpha} - \sin{3\alpha})
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const sin_x = sinq(x);
    fp128 const sin_3x = sinq(3.0Q * x);

    fp128 const result = (1.0Q / 4.0Q) * ((3.0Q * sin_x) - sin_3x);

    return result;
}
