#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sin{(4\alpha)} = 8\sin{\alpha}\cos^3{\alpha} - 4\sin{\alpha}\cos{\alpha}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const s = sinl(x);
    fp80 const c = cosl(x);

    fp80 const result = (8.0L * s * c * c * c) - (4.0L * s * c);

    return result;
}
