#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\sin{\alpha}}{1 + \cos{\alpha}}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const result = sinq(x) / (1.0Q + cosq(x));

    return result;
}
