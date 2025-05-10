#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     3\sin{\alpha} - 4\sin^3{\alpha}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const s = sinq(x);

    fp128 const result = (3.0Q * s) - (4.0Q * s * s * s);

    return result;
}
