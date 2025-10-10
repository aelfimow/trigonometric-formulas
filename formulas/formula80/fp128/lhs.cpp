#include "fp128.h"
#include "lhs.h"

#include <quadmath.h>

/**
 * Left Hand Side:
 *
 * @f[
 *     \cos{\alpha} - \sin{\alpha}
 * @f]
 */
fp128 lhs(fp128 x)
{
    fp128 const c = cosq(x);
    fp128 const s = sinq(x);

    fp128 const result = (c - s);

    return result;
}
