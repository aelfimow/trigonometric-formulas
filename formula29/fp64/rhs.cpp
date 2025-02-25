#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     2\cdot\cos^{2}{\alpha} - 1
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const a = cos(x);

    fp64 const result = (2.0 * (a * a)) - 1.0;

    return result;
}
