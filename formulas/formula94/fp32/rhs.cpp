#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{1}{4} (\sin{(\alpha + \beta - \gamma)} + \sin{(\beta + \gamma - \alpha)} + \sin{(\gamma + \alpha - \beta)} - \sin{(\alpha + \beta + \gamma)})
 * @f]
 */
fp32 rhs(fp32 alpha, fp32 beta, fp32 gamma)
{
    fp32 const a = sinf(alpha + beta - gamma);
    fp32 const b = sinf(beta + gamma - alpha);
    fp32 const c = sinf(gamma + alpha - beta);
    fp32 const d = sinf(alpha + beta + gamma);

    fp32 const result = (1.0f / 4.0f) * (a + b + c - d);

    return result;
}
