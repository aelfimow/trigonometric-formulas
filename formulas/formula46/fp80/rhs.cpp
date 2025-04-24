#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\sin{\alpha}}{1 + \cos{\alpha}}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const result = sinl(x) / (1.0L + cosl(x));

    return result;
}
