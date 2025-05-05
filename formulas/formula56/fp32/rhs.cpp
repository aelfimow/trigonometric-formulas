#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\sin{2\alpha}}{1 - \cos{2\alpha}}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const x2 = (2.0f * x);

    fp32 const result = sinf(x2) / (1.0f - cosf(x2));

    return result;
}
