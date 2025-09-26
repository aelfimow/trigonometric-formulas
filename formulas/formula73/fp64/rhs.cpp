#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\sin{(\alpha - \beta)}}{\cos{\alpha}\cos{\beta}}
 * @f]
 */
fp64 rhs(fp64 alpha, fp64 beta)
{
    fp64 const s = sin(alpha - beta);
    fp64 const c1 = cos(alpha);
    fp64 const c2 = cos(beta);

    fp64 const result = (s / (c1 * c2));

    return result;
}
