#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{1}{2}(1 + \cos{2\alpha})
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const a = cosl(2.0L * x);

    fp80 const result = (1.0L / 2.0L) * (1.0L + a);

    return result;
}
