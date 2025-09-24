#include "fp64.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \cos{\alpha} - \cos{\beta}
 * @f]
 */
fp64 lhs(fp64 alpha, fp64 beta)
{
    fp64 const a = cos(alpha);
    fp64 const b = cos(beta);

    fp64 const result = (a - b);

    return result;
}
