#include "fp128.h"
#include "lhs.h"

#include <quadmath.h>

/**
 * Left Hand Side:
 *
 * @f[
 *     \sin{\alpha}
 * @f]
 */
fp128 lhs(fp128 x)
{
    fp128 const result = sinq(x);

    return result;
}
