#include "fp80.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \cos{2\alpha}
 * @f]
 */
fp80 lhs(fp80 x)
{
    fp80 const result = cosl(2.0L * x);

    return result;
}
