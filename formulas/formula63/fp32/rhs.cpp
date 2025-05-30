#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     16\cos^5{\alpha} - 20\cos^3{\alpha} + 5\cos{\alpha}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const c = cosf(x);
    fp32 const c3 = (c * c * c);
    fp32 const c5 = (c3 * c * c);

    fp32 const result = (16.0f * c5) - (20.0f * c3) + (5.0f * c);

    return result;
}
