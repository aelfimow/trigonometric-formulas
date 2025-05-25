#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     8\cos^4{\alpha} - 8\cos^2{\alpha} + 1
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const c = cosl(x);
    fp80 const c2 = (c * c);
    fp80 const c4 = (c2 * c2);

    fp80 const result = (8.0L * c4) - (8.0L * c2) + 1.0L;

    return result;
}
