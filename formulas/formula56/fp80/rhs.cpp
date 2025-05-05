#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\sin{2\alpha}}{1 - \cos{2\alpha}}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const x2 = (2.0L * x);

    fp80 const result = sinl(x2) / (1.0L - cosl(x2));

    return result;
}
