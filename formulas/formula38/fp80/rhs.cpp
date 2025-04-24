#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{2\tan^{2}{\frac{\alpha}{2}}}{1 - \tan^{2}{\frac{\alpha}{2}}}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const x_0 = (x / 2.0L);

    fp80 const a = tanl(x_0);

    fp80 const result = (2.0L * a) / (1.0L - (a * a));

    return result;
}
