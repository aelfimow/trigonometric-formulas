#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \cos^{2}{\frac{\alpha}{2}} - \sin^{2}{\frac{\alpha}{2}}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const x_2 = (x / 2.0f);

    fp32 const a = cosf(x_2);
    fp32 const b = sinf(x_2);

    fp32 const result = (a * a) - (b * b);

    return result;
}
