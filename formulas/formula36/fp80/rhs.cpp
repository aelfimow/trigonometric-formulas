#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     1 - 2\sin^{2}{\frac{\alpha}{2}}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const x_2 = (x / 2.0L);

    fp80 const a = sinl(x_2);

    fp80 const result = 1.0L - (2.0L * (a * a));

    return result;
}
