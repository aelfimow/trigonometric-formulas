#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{1}{4} (-\cos{(\alpha + \beta - \gamma)} + \cos{(\beta + \gamma - \alpha)} + \cos{(\gamma + \alpha - \beta)} - \cos{(\alpha + \beta + \gamma)})
 * @f]
 */
fp80 rhs(fp80 alpha, fp80 beta, fp80 gamma)
{
    fp80 const a = cosl(alpha + beta - gamma);
    fp80 const b = cosl(beta + gamma - alpha);
    fp80 const c = cosl(gamma + alpha - beta);
    fp80 const d = cosl(alpha + beta + gamma);

    fp80 const result = (1.0L / 4.0L) * (-a + b + c - d);

    return result;
}
