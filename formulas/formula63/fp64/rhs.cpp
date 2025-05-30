#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     16\cos^5{\alpha} - 20\cos^3{\alpha} + 5\cos{\alpha}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const c = cos(x);
    fp64 const c3 = (c * c * c);
    fp64 const c5 = (c3 * c * c);

    fp64 const result = (16.0 * c5) - (20.0 * c3) + (5.0 * c);

    return result;
}
