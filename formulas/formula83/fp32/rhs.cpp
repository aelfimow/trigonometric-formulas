#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{1}{2} (\cos{(\alpha - \beta)} + \cos{(\alpha + \beta)})
 * @f]
 */
fp32 rhs(fp32 alpha, fp32 beta)
{
    fp32 const a = cosf(alpha - beta);
    fp32 const b = cosf(alpha + beta);

    fp32 const result = (1.0f / 2.0f) * (a + b);

    return result;
}
