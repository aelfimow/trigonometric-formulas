#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\sin{(\beta - \alpha)}}{\sin{\alpha}\sin{\beta}}
 * @f]
 */
fp128 rhs(fp128 alpha, fp128 beta)
{
    fp128 const s = sinq(beta - alpha);
    fp128 const s1 = sinq(alpha);
    fp128 const s2 = sinq(beta);

    fp128 const result = (s / (s1 * s2));

    return result;
}
