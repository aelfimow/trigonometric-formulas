#include "fp32.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \sin^{3}{\alpha}
 * @f]
 */
fp32 lhs(fp32 x)
{
    fp32 const result = powf(sinf(x), 3.0f);

    return result;
}
