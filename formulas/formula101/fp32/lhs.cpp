#include "fp32.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \cos^{3}{\alpha}
 * @f]
 */
fp32 lhs(fp32 x)
{
    fp32 const result = powf(cosf(x), 3.0f);

    return result;
}
