#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     8\cos^4{\alpha} - 8\cos^2{\alpha} + 1
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const c = cosq(x);
    fp128 const c2 = (c * c);
    fp128 const c4 = (c2 * c2);

    fp128 const result = (8.0Q * c4) - (8.0Q * c2) + 1.0Q;

    return result;
}
