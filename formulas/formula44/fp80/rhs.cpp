#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \tan{\frac{\alpha}{2}} = \sqrt{\frac{1 - \cos{\alpha}}{1 + \cos{\alpha}}}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const a = cosl(x);

    fp80 const result = sqrtl((1.0L - a) / (1.0L + a));

    return result;
}
