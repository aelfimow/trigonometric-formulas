#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{1}{4}(3\cos{\alpha} + \cos{3\alpha})
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const cos_x = cosf(x);
    fp32 const cos_3x = cosf(3.0f * x);

    fp32 const result = (1.0f / 4.0f) * ((3.0f * cos_x) + cos_3x);

    return result;
}
