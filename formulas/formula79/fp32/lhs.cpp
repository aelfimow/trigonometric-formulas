#include "fp32.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \cos{\alpha} - \sin{\alpha}
 * @f]
 */
fp32 lhs(fp32 x)
{
    fp32 const c = cosf(x);
    fp32 const s = sinf(x);

    fp32 const result = (c - s);

    return result;
}
