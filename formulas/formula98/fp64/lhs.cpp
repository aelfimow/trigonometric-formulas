#include "fp64.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \sin^{2}{\alpha}
 * @f]
 */
fp64 lhs(fp64 x)
{
    fp64 const sin_x = sin(x);
    fp64 const result = (sin_x * sin_x);

    return result;
}
