#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{2\cdot\tan^{2}{\alpha}}{1 - \tan^{2}{\alpha}}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const a = tanf(x);

    fp32 const result = (2.0f * a) / (1.0f - (a * a));

    return result;
}
