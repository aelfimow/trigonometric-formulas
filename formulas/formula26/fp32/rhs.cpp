#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     2\sin{\alpha}\cos{\alpha}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const result = 2.0f * sinf(x) * cosf(x);

    return result;
}
