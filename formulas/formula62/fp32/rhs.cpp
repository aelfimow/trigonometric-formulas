#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     8\cos^4{\alpha} - 8\cos^2{\alpha} + 1
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const c = cosf(x);
    fp32 const c2 = (c * c);
    fp32 const c4 = (c2 * c2);

    fp32 const result = (8.0f * c4) - (8.0f * c2) + 1.0f;

    return result;
}
