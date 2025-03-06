#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{2\tan^{2}{\frac{\alpha}{2}}}{1 - \tan^{2}{\frac{\alpha}{2}}}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const x_0 = (x / 2.0);

    fp64 const a = tan(x_0);

    fp64 const result = (2.0 * a) / (1.0 - (a * a));

    return result;
}
