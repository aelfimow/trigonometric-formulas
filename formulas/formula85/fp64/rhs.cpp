#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{1}{2} (\sin{(\alpha + \beta)} - \sin{(\alpha - \beta)})
 * @f]
 */
fp64 rhs(fp64 alpha, fp64 beta)
{
    fp64 const a = sin(alpha + beta);
    fp64 const b = sin(alpha - beta);

    fp64 const result = (1.0 / 2.0) * (a - b);

    return result;
}
