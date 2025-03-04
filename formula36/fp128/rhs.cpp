#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     1 - 2\cdot\sin^{2}{\frac{\alpha}{2}}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const x_2 = (x / 2.0Q);

    fp128 const a = sinq(x_2);

    fp128 const result = 1.0Q - (2.0Q * (a * a));

    return result;
}
