#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     1 - 2\cdot\sin^{2}{\alpha}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const a = sin(x);

    fp64 const result = 1.0 - (2.0 * (a * a));

    return result;
}
