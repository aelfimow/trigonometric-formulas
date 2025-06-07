#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{4\tan{\alpha} - 4\tan^3{\alpha}}{1 - 6\tan^2{\alpha} + \tan^4{\alpha}}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const t = tanf(x);
    fp32 const t2 = (t * t);
    fp32 const t3 = (t2 * t);
    fp32 const t4 = (t3 * t);

    fp32 const result = ((4.0f * t) - (4.0f * t3)) / (1.0f - (6.0f * t2) + t4);

    return result;
}
