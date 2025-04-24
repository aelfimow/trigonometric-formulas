#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     2\cos^{2}{\alpha} - 1
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const a = cosl(x);

    fp80 const result = (2.0L * (a * a)) - 1.0L;

    return result;
}
