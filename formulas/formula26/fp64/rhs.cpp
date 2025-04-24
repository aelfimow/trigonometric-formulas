#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     2\sin{\alpha}\cos{\alpha}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const result = 2.0 * sin(x) * cos(x);

    return result;
}
