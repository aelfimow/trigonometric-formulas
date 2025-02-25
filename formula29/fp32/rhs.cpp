#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     2\cdot\cos^{2}{\alpha} - 1
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const a = cosf(x);

    fp32 const result = (2.0f * (a * a)) - 1.0f;

    return result;
}
