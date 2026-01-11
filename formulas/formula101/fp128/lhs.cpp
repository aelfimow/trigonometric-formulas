#include "fp128.h"
#include "lhs.h"

#include <quadmath.h>

/**
 * Left Hand Side:
 *
 * @f[
 *     \cos^{3}{\alpha}
 * @f]
 */
fp128 lhs(fp128 x)
{
    fp128 const result = powq(cosq(x), 3.0Q);

    return result;
}
