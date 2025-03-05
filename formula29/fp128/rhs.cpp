#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     2\cos^{2}{\alpha} - 1
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const a = cosq(x);

    fp128 const result = (2.0Q * (a * a)) - 1.0Q;

    return result;
}
