#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sqrt{\frac{1 + \cos{\alpha}}{2}}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const result = sqrtl((1.0L + cosl(x)) / 2.0L);

    return result;
}
