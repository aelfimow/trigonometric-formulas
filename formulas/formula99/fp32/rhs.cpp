#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{1}{2}(1 + \cos{2\alpha})
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const a = cosf(2.0f * x);

    fp32 const result = (1.0f / 2.0f) * (1.0f + a);

    return result;
}
