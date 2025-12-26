#include "fp64.h"
#include "lhs.h"
#include "cot.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \cot{\alpha} \tan{\beta}
 * @f]
 */
fp64 lhs(fp64 alpha, fp64 beta)
{
    fp64 const a = cot(alpha);
    fp64 const b = tan(beta);

    fp64 const result = (a * b);

    return result;
}
