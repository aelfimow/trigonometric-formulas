#include "fp64.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \cos{\alpha} + \sin{\alpha}
 * @f]
 */
fp64 lhs(fp64 x)
{
    fp64 const c = cos(x);
    fp64 const s = sin(x);

    fp64 const result = (c + s);

    return result;
}
