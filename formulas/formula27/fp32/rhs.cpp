#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \cos^{2}{\alpha} - \sin^{2}{\alpha}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const a = cosf(x);
    fp32 const b = sinf(x);

    fp32 const result = (a * a) - (b * b);

    return result;
}
