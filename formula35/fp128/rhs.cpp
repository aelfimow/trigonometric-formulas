#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     \cos^{2}{\frac{\alpha}{2}} - \sin^{2}{\frac{\alpha}{2}}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const x_2 = (x / 2.0Q);

    fp128 const a = cosq(x_2);
    fp128 const b = sinq(x_2);

    fp128 const result = (a * a) - (b * b);

    return result;
}
