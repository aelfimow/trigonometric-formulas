#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     frac{2\cdot\tan^{2}{\alpha}}{1 - \tan^{2}{\alpha}}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const a = tanl(x);

    fp80 const result = (2.0L * a) / (1.0L - (a * a));

    return result;
}
