#include "fp64.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \sin{\alpha} + \sin{\beta}
 * @f]
 */
fp64 lhs(fp64 alpha, fp64 beta)
{
    fp64 const a = sin(alpha);
    fp64 const b = sin(beta);

    fp64 const result = (a + b);

    return result;
}
