#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\sin{(\alpha - \beta)}}{\cos{\alpha}\cos{\beta}}
 * @f]
 */
fp32 rhs(fp32 alpha, fp32 beta)
{
    fp32 const s = sinf(alpha - beta);
    fp32 const c1 = cosf(alpha);
    fp32 const c2 = cosf(beta);

    fp32 const result = (s / (c1 * c2));

    return result;
}
