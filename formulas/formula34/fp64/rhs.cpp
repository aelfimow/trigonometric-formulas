#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     2\sin{\frac{\alpha}{2}}\cos{\frac{\alpha}{2}}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const x_2 = (x / 2.0);

    fp64 const result = 2.0 * sin(x_2) * cos(x_2);

    return result;
}
