#include "fp80.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \cos{\alpha} + \sin{\alpha}
 * @f]
 */
fp80 lhs(fp80 x)
{
    fp80 const c = cosl(x);
    fp80 const s = sinl(x);

    fp80 const result = (c + s);

    return result;
}
