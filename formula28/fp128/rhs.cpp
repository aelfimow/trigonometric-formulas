#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     1 - 2\cdot\sin^{2}{\alpha}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const a = sinq(x);

    fp128 const result = 1.0Q - (2.0Q * (a * a));

    return result;
}
