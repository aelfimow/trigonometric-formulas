#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     4\cos^3{\alpha} - 3\cos{\alpha}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const c = cos(x);

    fp64 const result = (4.0 * c * c * c) - (3.0 * c);

    return result;
}
