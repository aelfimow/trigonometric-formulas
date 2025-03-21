#include "fp128.h"
#include "lhs.h"

#include <quadmath.h>

/**
 * Left Hand Side:
 *
 * @f[
 *     \tan{\frac{\alpha}{2}}
 * @f]
 */
fp128 lhs(fp128 x)
{
    fp128 const x_2 = (x / 2.0Q);

    fp128 const result = tanq(x_2);

    return result;
}
