#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \cos^{2}{\frac{\alpha}{2}} - \sin^{2}{\frac{\alpha}{2}}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const x_2 = (x / 2.0);

    fp64 const a = cos(x_2);
    fp64 const b = sin(x_2);

    fp64 const result = (a * a) - (b * b);

    return result;
}
