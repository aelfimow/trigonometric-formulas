#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{1}{4}(3\cos{\alpha} + \cos{3\alpha})
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const cos_x = cosl(x);
    fp80 const cos_3x = cosl(3.0L * x);

    fp80 const result = (1.0L / 4.0L) * ((3.0L * cos_x) + cos_3x);

    return result;
}
