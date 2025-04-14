#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{1 + \cos{\alpha}}{\sin{\alpha}}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const result = (1.0 + cos(x)) / sin(x);

    return result;
}
