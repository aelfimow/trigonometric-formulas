#include "fp64.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \sin{5\alpha}
 * @f]
 */
fp64 lhs(fp64 x)
{
    fp64 const result = sin(5.0 * x);

    return result;
}
