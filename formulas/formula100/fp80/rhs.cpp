#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{1}{4}(3\sin{\alpha} - \sin{3\alpha})
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const sin_x = sinl(x);
    fp80 const sin_3x = sinl(3.0L * x);

    fp80 const result = (1.0L / 4.0L) * ((3.0L * sin_x) - sin_3x);

    return result;
}
