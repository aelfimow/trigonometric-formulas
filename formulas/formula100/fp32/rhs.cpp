#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{1}{4}(3\sin{\alpha} - \sin{3\alpha})
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const sin_x = sinf(x);
    fp32 const sin_3x = sinf(3.0f * x);

    fp32 const result = (1.0f / 4.0f) * ((3.0f * sin_x) - sin_3x);

    return result;
}
