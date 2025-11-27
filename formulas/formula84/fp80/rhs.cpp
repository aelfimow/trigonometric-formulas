#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{1}{2} (\sin{(\alpha + \beta)} + \sin{(\alpha - \beta)})
 * @f]
 */
fp80 rhs(fp80 alpha, fp80 beta)
{
    fp80 const a = sinl(alpha + beta);
    fp80 const b = sinl(alpha - beta);

    fp80 const result = (1.0L / 2.0L) * (a + b);

    return result;
}
