#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sqrt{\frac{1 + \cos{\alpha}}{1 - \cos{\alpha}}}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const a = cos(x);

    fp64 const result = sqrt((1.0 + a) / (1.0 - a));

    return result;
}
