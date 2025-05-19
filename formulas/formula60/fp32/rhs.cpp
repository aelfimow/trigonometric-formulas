#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sin{(5\alpha)} = 16\sin{\alpha}\cos^4{\alpha} - 12\sin{\alpha}\cos^2{\alpha} + \sin{\alpha}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const s = sinf(x);
    fp32 const c = cosf(x);
    fp32 const c2 = (c * c);
    fp32 const c4 = (c2 * c2);

    fp32 const result = (16.0f * s * c4) - (12.0f * s * c2) + s;

    return result;
}
