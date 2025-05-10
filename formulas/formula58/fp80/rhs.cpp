#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     3\sin{\alpha} - 4\sin^3{\alpha}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const s = sinl(x);

    fp80 const result = (3.0L * s) - (4.0L * s * s * s);

    return result;
}
