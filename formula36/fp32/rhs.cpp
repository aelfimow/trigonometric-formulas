#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     1 - 2\cdot\sin^{2}{\frac{\alpha}{2}}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const x_2 = (x / 2.0f);

    fp32 const a = sinf(x_2);

    fp32 const result = 1.0f - (2.0f * (a * a));

    return result;
}
