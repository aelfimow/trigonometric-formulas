#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sin{(5\alpha)} = 16\sin{\alpha}\cos^4{\alpha} - 12\sin{\alpha}\cos^2{\alpha} + \sin{\alpha}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const s = sinq(x);
    fp128 const c = cosq(x);
    fp128 const c2 = (c * c);
    fp128 const c4 = (c2 * c2);

    fp128 const result = (16.0Q * s * c4) - (12.0Q * s * c2) + s;

    return result;
}
