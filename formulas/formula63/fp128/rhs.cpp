#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     16\cos^5{\alpha} - 20\cos^3{\alpha} + 5\cos{\alpha}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const c = cosq(x);
    fp128 const c3 = (c * c * c);
    fp128 const c5 = (c3 * c * c);

    fp128 const result = (16.0Q * c5) - (20.0Q * c3) + (5.0Q * c);

    return result;
}
