#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{3\tan{\alpha} - \tan^3{\alpha}}{1 - 3\tan^2{\alpha}}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const t = tanf(x);
    fp32 const t2 = (t * t);
    fp32 const t3 = (t2 * t);

    fp32 const result = ((3.0f * t) - t3) / (1.0f - (3.0f * t2));

    return result;
}
