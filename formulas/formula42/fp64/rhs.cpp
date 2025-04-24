#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sqrt{\frac{1 - \cos{\alpha}}{2}}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const result = sqrt((1.0 - cos(x)) / 2.0);

    return result;
}
