#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     16\cos^5{\alpha} - 20\cos^3{\alpha} + 5\cos{\alpha}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const c = cosl(x);
    fp80 const c3 = (c * c * c);
    fp80 const c5 = (c3 * c * c);

    fp80 const result = (16.0L * c5) - (20.0L * c3) + (5.0L * c);

    return result;
}
