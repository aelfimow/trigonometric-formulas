#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     3\sin{\alpha} - 4\sin^3{\alpha}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const s = sin(x);

    fp64 const result = (3.0 * s) - (4.0 * s * s * s);

    return result;
}
