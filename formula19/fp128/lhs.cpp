#include "fp128.h"
#include "lhs.h"

#include <quadmath.h>

/**
 * Left Hand Side:
 *
 * @f[
 *     \cos{\alpha}
 * @f]
 */
fp128 lhs(fp128 alpha)
{
    fp128 const result = cosq(alpha);

    return result;
}
