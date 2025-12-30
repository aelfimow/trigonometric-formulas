#include "fp80.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \cos^{2}{\alpha}
 * @f]
 */
fp80 lhs(fp80 x)
{
    fp80 const cos_x = cosl(x);
    fp80 const result = (cos_x * cos_x);

    return result;
}
