#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     2\cos^{2}{\frac{\alpha}{2}} - 1
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const x_2 = (x / 2.0);

    fp64 const a = cos(x_2);

    fp64 const result = (2.0 * (a * a)) - 1.0;

    return result;
}
