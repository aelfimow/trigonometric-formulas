#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{1}{4}(3\sin{\alpha} - \sin{3\alpha})
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const sin_x = sin(x);
    fp64 const sin_3x = sin(3.0 * x);

    fp64 const result = (1.0 / 4.0) * ((3.0 * sin_x) - sin_3x);

    return result;
}
