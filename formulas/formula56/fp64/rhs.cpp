#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\sin{2\alpha}}{1 - \cos{2\alpha}}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const x2 = (2.0 * x);

    fp64 const result = sin(x2) / (1.0 - cos(x2));

    return result;
}
