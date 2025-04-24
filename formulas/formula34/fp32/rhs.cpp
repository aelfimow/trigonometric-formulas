#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     2\sin{\frac{\alpha}{2}}\cos{\frac{\alpha}{2}}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const x_2 = (x / 2.0f);

    fp32 const result = 2.0f * sinf(x_2) * cosf(x_2);

    return result;
}
