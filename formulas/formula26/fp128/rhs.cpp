#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     2\sin{\alpha}\cos{\alpha}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const result = 2.0Q * sinq(x) * cosq(x);

    return result;
}
