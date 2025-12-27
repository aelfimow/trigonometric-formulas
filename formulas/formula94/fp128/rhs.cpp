#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{1}{4} (\sin{(\alpha + \beta - \gamma)} + \sin{(\beta + \gamma - \alpha)} + \sin{(\gamma + \alpha - \beta)} - \sin{(\alpha + \beta + \gamma)})
 * @f]
 */
fp128 rhs(fp128 alpha, fp128 beta, fp128 gamma)
{
    fp128 const a = sinq(alpha + beta - gamma);
    fp128 const b = sinq(beta + gamma - alpha);
    fp128 const c = sinq(gamma + alpha - beta);
    fp128 const d = sinq(alpha + beta + gamma);

    fp128 const result = (1.0Q / 4.0Q) * (a + b + c - d);

    return result;
}
