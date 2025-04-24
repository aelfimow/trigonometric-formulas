#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sqrt{1 - \sin^{2}{\alpha}}
 * @f]
 */
fp128 rhs(fp128 alpha)
{
    fp128 const a = sinq(alpha);

    fp128 const result = sqrtq(1.0Q - (a * a));

    return result;
}
