#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\sin{(\alpha + \beta)}}{\cos{\alpha}\cos{\beta}}
 * @f]
 */
fp128 rhs(fp128 alpha, fp128 beta)
{
    fp128 const s = sinq(alpha + beta);
    fp128 const c1 = cosq(alpha);
    fp128 const c2 = cosq(beta);

    fp128 const result = (s / (c1 * c2));

    return result;
}
