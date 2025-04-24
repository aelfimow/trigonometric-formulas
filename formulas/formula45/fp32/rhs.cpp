#include "fp32.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{1 - \cos{\alpha}}{\sin{\alpha}}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const result = (1.0f - cosf(x)) / sinf(x);

    return result;
}
