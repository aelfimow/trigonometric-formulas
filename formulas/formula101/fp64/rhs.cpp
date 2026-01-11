#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{1}{4}(3\cos{\alpha} + \cos{3\alpha})
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const cos_x = cos(x);
    fp64 const cos_3x = cos(3.0 * x);

    fp64 const result = (1.0 / 4.0) * ((3.0 * cos_x) + cos_3x);

    return result;
}
