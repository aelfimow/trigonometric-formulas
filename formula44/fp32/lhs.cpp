#include "fp32.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \tan{\frac{\alpha}{2}}
 * @f]
 */
fp32 lhs(fp32 x)
{
    fp32 const x_2 = (x / 2.0f);

    fp32 const result = tanf(x_2);

    return result;
}
