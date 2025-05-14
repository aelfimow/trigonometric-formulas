#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sin{(4\alpha)} = 8\sin{\alpha}\cos^3{\alpha} - 4\sin{\alpha}\cos{\alpha}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const s = sinf(x);
    fp32 const c = cosf(x);

    fp32 const result = (8.0f * s * c * c * c) - (4.0f * s * c);

    return result;
}
