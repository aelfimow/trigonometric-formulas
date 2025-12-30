#include "fp64.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \cos^{2}{\alpha}
 * @f]
 */
fp64 lhs(fp64 x)
{
    fp64 const cos_x = cos(x);
    fp64 const result = (cos_x * cos_x);

    return result;
}
