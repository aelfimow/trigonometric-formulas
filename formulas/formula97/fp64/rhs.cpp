#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{1}{4} (\sin{(\alpha + \beta - \gamma)} - \sin{(\beta + \gamma - \alpha)} + \sin{(\gamma + \alpha - \beta)} + \sin{(\alpha + \beta + \gamma)})
 * @f]
 */
fp64 rhs(fp64 alpha, fp64 beta, fp64 gamma)
{
    fp64 const a = sin(alpha + beta - gamma);
    fp64 const b = sin(beta + gamma - alpha);
    fp64 const c = sin(gamma + alpha - beta);
    fp64 const d = sin(alpha + beta + gamma);

    fp64 const result = (1.0 / 4.0) * (a - b + c + d);

    return result;
}
