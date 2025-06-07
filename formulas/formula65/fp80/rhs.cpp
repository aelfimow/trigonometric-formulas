#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{4\tan{\alpha} - 4\tan^3{\alpha}}{1 - 6\tan^2{\alpha} + \tan^4{\alpha}}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const t = tanl(x);
    fp80 const t2 = (t * t);
    fp80 const t3 = (t2 * t);
    fp80 const t4 = (t3 * t);

    fp80 const result = ((4.0L * t) - (4.0L * t3)) / (1.0L - (6.0L * t2) + t4);

    return result;
}
