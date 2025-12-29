#include "fp80.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \sin^{2}{\alpha}
 * @f]
 */
fp80 lhs(fp80 x)
{
    fp80 const sin_x = sinl(x);
    fp80 const result = (sin_x * sin_x);

    return result;
}
