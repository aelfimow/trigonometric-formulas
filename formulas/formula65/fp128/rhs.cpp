#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{4\tan{\alpha} - 4\tan^3{\alpha}}{1 - 6\tan^2{\alpha} + \tan^4{\alpha}}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const t = tanq(x);
    fp128 const t2 = (t * t);
    fp128 const t3 = (t2 * t);
    fp128 const t4 = (t3 * t);

    fp128 const result = ((4.0Q * t) - (4.0Q * t3)) / (1.0Q - (6.0Q * t2) + t4);

    return result;
}
