#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sin{(4\alpha)} = 8\sin{\alpha}\cos^3{\alpha} - 4\sin{\alpha}\cos{\alpha}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const s = sinq(x);
    fp128 const c = cosq(x);

    fp128 const result = (8.0Q * s * c * c * c) - (4.0Q * s * c);

    return result;
}
