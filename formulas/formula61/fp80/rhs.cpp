#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     4\cos^3{\alpha} - 3\cos{\alpha}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const c = cosl(x);

    fp80 const result = (4.0L * c * c * c) - (3.0L * c);

    return result;
}
