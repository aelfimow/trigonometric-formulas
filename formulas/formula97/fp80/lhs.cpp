#include "fp80.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \sin{\alpha} \cos{\beta} \cos{\gamma}
 * @f]
 */
fp80 lhs(fp80 alpha, fp80 beta, fp80 gamma)
{
    fp80 const a = sinl(alpha);
    fp80 const b = cosl(beta);
    fp80 const g = cosl(gamma);

    fp80 const result = (a * b * g);

    return result;
}
