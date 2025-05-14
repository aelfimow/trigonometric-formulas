#include "fp128.h"
#include "lhs.h"

#include <quadmath.h>

/**
 * Left Hand Side:
 *
 * @f[
 *     \sin{4\alpha}
 * @f]
 */
fp128 lhs(fp128 x)
{
    fp128 const result = sinq(4.0Q * x);

    return result;
}
