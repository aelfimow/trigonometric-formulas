#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\sin{\alpha}}{\cos{\alpha}}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const a = sinq(x);
    fp128 const b = cosq(x);

    fp128 const result = (a / b);

    return result;
}
