#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{1 + \cos{2\alpha}}{\sin{2\alpha}}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const x2 = (2.0L * x);

    fp80 const result = (1.0L + cosl(x2)) / sinl(x2);

    return result;
}
