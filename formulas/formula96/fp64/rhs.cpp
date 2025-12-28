#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{1}{4} (-\cos{(\alpha + \beta - \gamma)} + \cos{(\beta + \gamma - \alpha)} + \cos{(\gamma + \alpha - \beta)} - \cos{(\alpha + \beta + \gamma)})
 * @f]
 */
fp64 rhs(fp64 alpha, fp64 beta, fp64 gamma)
{
    fp64 const a = cos(alpha + beta - gamma);
    fp64 const b = cos(beta + gamma - alpha);
    fp64 const c = cos(gamma + alpha - beta);
    fp64 const d = cos(alpha + beta + gamma);

    fp64 const result = (1.0 / 4.0) * (-a + b + c - d);

    return result;
}
