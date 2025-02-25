#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     \cos^{2}{\alpha} - \sin^{2}{\alpha}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const a = cosq(x);
    fp128 const b = sinq(x);

    fp128 const result = (a * a) - (b * b);

    return result;
}
