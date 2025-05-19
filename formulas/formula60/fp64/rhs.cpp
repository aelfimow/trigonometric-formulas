#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sin{(5\alpha)} = 16\sin{\alpha}\cos^4{\alpha} - 12\sin{\alpha}\cos^2{\alpha} + \sin{\alpha}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const s = sin(x);
    fp64 const c = cos(x);
    fp64 const c2 = (c * c);
    fp64 const c4 = (c2 * c2);

    fp64 const result = (16.0 * s * c4) - (12.0 * s * c2) + s;

    return result;
}
