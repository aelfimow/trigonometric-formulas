#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sin{(4\alpha)} = 8\sin{\alpha}\cos^3{\alpha} - 4\sin{\alpha}\cos{\alpha}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const s = sin(x);
    fp64 const c = cos(x);

    fp64 const result = (8.0 * s * c * c * c) - (4.0 * s * c);

    return result;
}
