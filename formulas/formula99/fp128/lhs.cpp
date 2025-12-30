#include "fp128.h"
#include "lhs.h"

#include <quadmath.h>

/**
 * Left Hand Side:
 *
 * @f[
 *     \cos^{2}{\alpha}
 * @f]
 */
fp128 lhs(fp128 x)
{
    fp128 const cos_x = cosq(x);
    fp128 const result = (cos_x * cos_x);

    return result;
}
