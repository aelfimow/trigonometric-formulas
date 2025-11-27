#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{1}{2} (\sin{(\alpha + \beta)} - \sin{(\alpha - \beta)})
 * @f]
 */
fp128 rhs(fp128 alpha, fp128 beta)
{
    fp128 const a = sinq(alpha + beta);
    fp128 const b = sinq(alpha - beta);

    fp128 const result = (1.0Q / 2.0Q) * (a - b);

    return result;
}
