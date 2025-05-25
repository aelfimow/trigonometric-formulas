#include "fp64.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \cos{4\alpha}
 * @f]
 */
fp64 lhs(fp64 x)
{
    fp64 const result = cos(4.0 * x);

    return result;
}
