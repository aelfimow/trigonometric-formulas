#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\sin{(\alpha + \beta)}}{\sin{\alpha}\sin{\beta}}
 * @f]
 */
fp80 rhs(fp80 alpha, fp80 beta)
{
    fp80 const s = sinl(alpha + beta);
    fp80 const s1 = sinl(alpha);
    fp80 const s2 = sinl(beta);

    fp80 const result = (s / (s1 * s2));

    return result;
}
