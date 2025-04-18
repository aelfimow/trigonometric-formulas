#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\sin{\alpha}}{1 - \cos{\alpha}}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const result = sinf(x) / (1.0f - cosf(x));

    return result;
}
