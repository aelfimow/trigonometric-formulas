#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     1 - 2\cdot\sin^{2}{\alpha}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const a = sinf(x);

    fp32 const result = 1.0f - (2.0f * (a * a));

    return result;
}
