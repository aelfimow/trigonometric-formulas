#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sqrt{\frac{1 - \cos{\alpha}}{2}}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const result = sqrtf((1.0f - cosf(x)) / 2.0f);

    return result;
}
