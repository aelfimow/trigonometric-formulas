#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\sin{(\beta - \alpha)}}{\sin{\alpha}\sin{\beta}}
 * @f]
 */
fp32 rhs(fp32 alpha, fp32 beta)
{
    fp32 const s = sinf(beta - alpha);
    fp32 const s1 = sinf(alpha);
    fp32 const s2 = sinf(beta);

    fp32 const result = (s / (s1 * s2));

    return result;
}
