#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     4\cos^3{\alpha} - 3\cos{\alpha}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const c = cosq(x);

    fp128 const result = (4.0Q * c * c * c) - (3.0Q * c);

    return result;
}
