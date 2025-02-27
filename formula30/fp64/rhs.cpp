#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{2\cdot\tan^{2}{\alpha}}{1 - \tan^{2}{\alpha}}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const a = tan(x);

    fp64 const result = (2.0 * a) / (1.0 - (a * a));

    return result;
}
