#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{1}{2} (\cos{(\alpha - \beta)} + \cos{(\alpha + \beta)})
 * @f]
 */
fp128 rhs(fp128 alpha, fp128 beta)
{
    fp128 const a = cosq(alpha - beta);
    fp128 const b = cosq(alpha + beta);

    fp128 const result = (1.0Q / 2.0Q) * (a + b);

    return result;
}
