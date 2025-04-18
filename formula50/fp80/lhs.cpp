#include "fp80.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \sin{\alpha}
 * @f]
 */
fp80 lhs(fp80 x)
{
    fp80 const result = sinl(x);

    return result;
}
