#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     1 - 2\sin^{2}{\frac{\alpha}{2}}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const x_2 = (x / 2.0);

    fp64 const a = sin(x_2);

    fp64 const result = 1.0 - (2.0 * (a * a));

    return result;
}
