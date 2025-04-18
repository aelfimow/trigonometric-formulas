#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\sin{\alpha}}{1 - \cos{\alpha}}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const result = sin(x) / (1.0 - cos(x));

    return result;
}
