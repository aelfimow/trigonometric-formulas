#include "fp128.h"
#include "lhs.h"

#include <quadmath.h>

/**
 * Left Hand Side:
 *
 * @f[
 *     \tan{4\alpha}
 * @f]
 */
fp128 lhs(fp128 x)
{
    fp128 const result = tanq(4.0Q * x);

    return result;
}
