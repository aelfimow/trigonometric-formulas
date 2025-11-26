#include "fp80.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \cos{\alpha} \cos{\beta}
 * @f]
 */
fp80 lhs(fp80 alpha, fp80 beta)
{
    fp80 const a = cosl(alpha);
    fp80 const b = cosl(beta);

    fp80 const result = (a * b);

    return result;
}
