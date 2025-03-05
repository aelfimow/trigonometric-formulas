#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     2\cos^{2}{\frac{\alpha}{2}} - 1
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const x_2 = (x / 2.0L);

    fp80 const a = cosl(x_2);

    fp80 const result = (2.0L * (a * a)) - 1.0L;

    return result;
}
