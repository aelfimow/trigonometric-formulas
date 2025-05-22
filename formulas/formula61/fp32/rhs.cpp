#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     4\cos^3{\alpha} - 3\cos{\alpha}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const c = cosf(x);

    fp32 const result = (4.0f * c * c * c) - (3.0f * c);

    return result;
}
