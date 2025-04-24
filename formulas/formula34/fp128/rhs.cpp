#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     2\sin{\frac{\alpha}{2}}\cos{\frac{\alpha}{2}}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const x_2 = (x / 2.0Q);

    fp128 const result = 2.0Q * sinq(x_2) * cosq(x_2);

    return result;
}
