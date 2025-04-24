#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     2\sin{\alpha}\cos{\alpha}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const result = 2.0L * sinl(x) * cosl(x);

    return result;
}
