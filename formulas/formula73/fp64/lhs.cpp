#include "fp64.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \tan{\alpha} - \tan{\beta}
 * @f]
 */
fp64 lhs(fp64 alpha, fp64 beta)
{
    fp64 const a = tan(alpha);
    fp64 const b = tan(beta);

    fp64 const result = (a - b);

    return result;
}
