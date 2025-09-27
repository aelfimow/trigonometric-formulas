#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\sin{(\alpha + \beta)}}{\sin{\alpha}\sin{\beta}}
 * @f]
 */
fp64 rhs(fp64 alpha, fp64 beta)
{
    fp64 const s = sin(alpha + beta);
    fp64 const s1 = sin(alpha);
    fp64 const s2 = sin(beta);

    fp64 const result = (s / (s1 * s2));

    return result;
}
