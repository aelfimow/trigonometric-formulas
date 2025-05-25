#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     8\cos^4{\alpha} - 8\cos^2{\alpha} + 1
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const c = cos(x);
    fp64 const c2 = (c * c);
    fp64 const c4 = (c2 * c2);

    fp64 const result = (8.0 * c4) - (8.0 * c2) + 1.0;

    return result;
}
