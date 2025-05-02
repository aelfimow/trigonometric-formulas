#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sqrt{\frac{1 + \cos{2\alpha}}{1 - \cos{2\alpha}}}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const a = cosf(2.0f * x);

    fp32 const result = sqrtf((1.0f + a) / (1.0f - a));

    return result;
}
