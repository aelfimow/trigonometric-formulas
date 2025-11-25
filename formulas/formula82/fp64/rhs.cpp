#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{1}{2} (\cos{(\alpha - \beta)} - \cos{(\alpha + \beta)})
 * @f]
 */
fp64 rhs(fp64 alpha, fp64 beta)
{
    fp64 const a = cos(alpha - beta);
    fp64 const b = cos(alpha + beta);

    fp64 const result = (1.0 / 2.0) * (a - b);

    return result;
}
