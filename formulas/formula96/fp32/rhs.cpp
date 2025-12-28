#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{1}{4} (-\cos{(\alpha + \beta - \gamma)} + \cos{(\beta + \gamma - \alpha)} + \cos{(\gamma + \alpha - \beta)} - \cos{(\alpha + \beta + \gamma)})
 * @f]
 */
fp32 rhs(fp32 alpha, fp32 beta, fp32 gamma)
{
    fp32 const a = cosf(alpha + beta - gamma);
    fp32 const b = cosf(beta + gamma - alpha);
    fp32 const c = cosf(gamma + alpha - beta);
    fp32 const d = cosf(alpha + beta + gamma);

    fp32 const result = (1.0f / 4.0f) * (-a + b + c - d);

    return result;
}
