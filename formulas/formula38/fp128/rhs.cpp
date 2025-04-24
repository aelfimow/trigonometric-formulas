#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{2\tan^{2}{\frac{\alpha}{2}}}{1 - \tan^{2}{\frac{\alpha}{2}}}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const x_0 = (x / 2.0Q);

    fp128 const a = tanq(x_0);

    fp128 const result = (2.0Q * a) / (1.0Q - (a * a));

    return result;
}
