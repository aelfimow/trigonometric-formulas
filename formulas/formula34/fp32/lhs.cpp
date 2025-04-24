#include "fp32.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \sin{\alpha}
 * @f]
 */
fp32 lhs(fp32 x)
{
    fp32 const result = sinf(x);

    return result;
}
