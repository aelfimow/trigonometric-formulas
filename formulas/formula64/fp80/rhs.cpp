#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{3\tan{\alpha} - \tan^3{\alpha}}{1 - 3\tan^2{\alpha}}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const t = tanl(x);
    fp80 const t2 = (t * t);
    fp80 const t3 = (t2 * t);

    fp80 const result = ((3.0L * t) - t3) / (1.0L - (3.0L * t2));

    return result;
}
