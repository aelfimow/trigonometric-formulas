#include "fp64.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \sin{2\alpha}
 * @f]
 */
fp64 lhs(fp64 x)
{
    fp64 const result = sin(2.0 * x);

    return result;
}
