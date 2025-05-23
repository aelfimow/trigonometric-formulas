#include "fp64.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \cos{3\alpha}
 * @f]
 */
fp64 lhs(fp64 x)
{
    fp64 const result = cos(3.0 * x);

    return result;
}
