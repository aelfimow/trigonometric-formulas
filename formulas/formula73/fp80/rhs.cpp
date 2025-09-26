#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\sin{(\alpha - \beta)}}{\cos{\alpha}\cos{\beta}}
 * @f]
 */
fp80 rhs(fp80 alpha, fp80 beta)
{
    fp80 const s = sinl(alpha - beta);
    fp80 const c1 = cosl(alpha);
    fp80 const c2 = cosl(beta);

    fp80 const result = (s / (c1 * c2));

    return result;
}
