#include "fp32.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \cos{2\alpha}
 * @f]
 */
fp32 lhs(fp32 x)
{
    fp32 const result = cosf(2.0f * x);

    return result;
}
