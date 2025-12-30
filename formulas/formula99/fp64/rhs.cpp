#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{1}{2}(1 + \cos{2\alpha})
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const a = cos(2.0 * x);

    fp64 const result = (1.0 / 2.0) * (1.0 + a);

    return result;
}
