#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \cos^{2}{\frac{\alpha}{2}} - \sin^{2}{\frac{\alpha}{2}}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const x_2 = (x / 2.0L);

    fp80 const a = cosl(x_2);
    fp80 const b = sinl(x_2);

    fp80 const result = (a * a) - (b * b);

    return result;
}
