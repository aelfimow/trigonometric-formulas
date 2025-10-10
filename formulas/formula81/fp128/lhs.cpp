#include "fp128.h"
#include "lhs.h"

#include <quadmath.h>

/**
 * Left Hand Side:
 *
 * @f[
 *     \sqrt{2} \sin{(45^\circ - \alpha)}
 * @f]
 */
fp128 lhs(fp128 x)
{
    fp128 const circ_45 = (M_PIq / 4.0Q);

    fp128 const s = sinq(circ_45 - x);

    fp128 const result = (sqrtq(2.0Q) * s);

    return result;
}
