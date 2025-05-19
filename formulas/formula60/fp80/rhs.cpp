#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sin{(5\alpha)} = 16\sin{\alpha}\cos^4{\alpha} - 12\sin{\alpha}\cos^2{\alpha} + \sin{\alpha}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const s = sinl(x);
    fp80 const c = cosl(x);
    fp80 const c2 = (c * c);
    fp80 const c4 = (c2 * c2);

    fp80 const result = (16.0L * s * c4) - (12.0L * s * c2) + s;

    return result;
}
