#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      2 \cos{\frac{\alpha + \beta}{2}} \sin{\frac{\alpha - \beta}{2}}
 * @f]
 */
fp32 rhs(fp32 alpha, fp32 beta)
{
    fp32 const a = cosf((alpha + beta) / 2.0f);
    fp32 const b = sinf((alpha - beta) / 2.0f);

    fp32 const result = (2.0f * a * b);

    return result;
}
