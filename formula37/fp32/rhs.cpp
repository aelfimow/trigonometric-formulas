#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     2\cos^{2}{\frac{\alpha}{2}} - 1
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const x_2 = (x / 2.0f);

    fp32 const a = cosf(x_2);

    fp32 const result = (2.0f * (a * a)) - 1.0f;

    return result;
}
