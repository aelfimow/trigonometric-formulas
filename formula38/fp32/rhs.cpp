#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{2\tan^{2}{\frac{\alpha}{2}}}{1 - \tan^{2}{\frac{\alpha}{2}}}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const x_0 = (x / 2.0f);

    fp32 const a = tanf(x_0);

    fp32 const result = (2.0f * a) / (1.0f - (a * a));

    return result;
}
