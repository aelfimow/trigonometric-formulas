#include "fp64.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \cos{5\alpha}
 * @f]
 */
fp64 lhs(fp64 x)
{
    fp64 const result = cos(5.0 * x);

    return result;
}
