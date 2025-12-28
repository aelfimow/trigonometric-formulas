#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{1}{4} (\sin{(\alpha + \beta - \gamma)} - \sin{(\beta + \gamma - \alpha)} + \sin{(\gamma + \alpha - \beta)} + \sin{(\alpha + \beta + \gamma)})
 * @f]
 */
fp80 rhs(fp80 alpha, fp80 beta, fp80 gamma)
{
    fp80 const a = sinl(alpha + beta - gamma);
    fp80 const b = sinl(beta + gamma - alpha);
    fp80 const c = sinl(gamma + alpha - beta);
    fp80 const d = sinl(alpha + beta + gamma);

    fp80 const result = (1.0L / 4.0L) * (a - b + c + d);

    return result;
}
