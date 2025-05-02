#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sqrt{\frac{1 + \cos{2\alpha}}{1 - \cos{2\alpha}}}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const a = cosl(2.0L * x);

    fp80 const result = sqrtl((1.0L + a) / (1.0L - a));

    return result;
}
