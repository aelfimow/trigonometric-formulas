#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{3\tan{\alpha} - \tan^3{\alpha}}{1 - 3\tan^2{\alpha}}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const t = tan(x);
    fp64 const t2 = (t * t);
    fp64 const t3 = (t2 * t);

    fp64 const result = ((3.0 * t) - t3) / (1.0 - (3.0 * t2));

    return result;
}
