#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{3\tan{\alpha} - \tan^3{\alpha}}{1 - 3\tan^2{\alpha}}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const t = tanq(x);
    fp128 const t2 = (t * t);
    fp128 const t3 = (t2 * t);

    fp128 const result = ((3.0Q * t) - t3) / (1.0Q - (3.0Q * t2));

    return result;
}
