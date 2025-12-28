#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{1}{4} (-\cos{(\alpha + \beta - \gamma)} + \cos{(\beta + \gamma - \alpha)} + \cos{(\gamma + \alpha - \beta)} - \cos{(\alpha + \beta + \gamma)})
 * @f]
 */
fp128 rhs(fp128 alpha, fp128 beta, fp128 gamma)
{
    fp128 const a = cosq(alpha + beta - gamma);
    fp128 const b = cosq(beta + gamma - alpha);
    fp128 const c = cosq(gamma + alpha - beta);
    fp128 const d = cosq(alpha + beta + gamma);

    fp128 const result = (1.0Q / 4.0Q) * (-a + b + c - d);

    return result;
}
