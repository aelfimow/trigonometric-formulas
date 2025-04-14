#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{1 + \cos{\alpha}}{\sin{\alpha}}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const result = (1.0L + cosl(x)) / sinl(x);

    return result;
}
