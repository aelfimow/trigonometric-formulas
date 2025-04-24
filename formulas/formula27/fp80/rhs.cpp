#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \cos^{2}{\alpha} - \sin^{2}{\alpha}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const a = cosl(x);
    fp80 const b = sinl(x);

    fp80 const result = (a * a) - (b * b);

    return result;
}
