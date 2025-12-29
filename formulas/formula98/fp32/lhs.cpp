#include "fp32.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \sin^{2}{\alpha}
 * @f]
 */
fp32 lhs(fp32 x)
{
    fp32 const sin_x = sinf(x);
    fp32 const result = (sin_x * sin_x);

    return result;
}
