#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     2\sin{\frac{\alpha}{2}}\cos{\frac{\alpha}{2}}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const x_2 = (x / 2.0L);

    fp80 const result = 2.0L * sinl(x_2) * cosl(x_2);

    return result;
}
