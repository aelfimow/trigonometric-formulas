#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     3\sin{\alpha} - 4\sin^3{\alpha}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const s = sinf(x);

    fp32 const result = (3.0f * s) - (4.0f * s * s * s);

    return result;
}
