#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\sin{2\alpha}}{1 - \cos{2\alpha}}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const x2 = (2.0Q * x);

    fp128 const result = sinq(x2) / (1.0Q - cosq(x2));

    return result;
}
