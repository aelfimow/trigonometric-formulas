#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \cos^{2}{\alpha} - \sin^{2}{\alpha}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const a = cos(x);
    fp64 const b = sin(x);

    fp64 const result = (a * a) - (b * b);

    return result;
}
