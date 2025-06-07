#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{4\tan{\alpha} - 4\tan^3{\alpha}}{1 - 6\tan^2{\alpha} + \tan^4{\alpha}}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const t = tan(x);
    fp64 const t2 = (t * t);
    fp64 const t3 = (t2 * t);
    fp64 const t4 = (t3 * t);

    fp64 const result = ((4.0 * t) - (4.0 * t3)) / (1.0 - (6.0 * t2) + t4);

    return result;
}
