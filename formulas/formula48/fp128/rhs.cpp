#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{1 + \cos{\alpha}}{\sin{\alpha}}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const result = (1.0Q + cosq(x)) / sinq(x);

    return result;
}
