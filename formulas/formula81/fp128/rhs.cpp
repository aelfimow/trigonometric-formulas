#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sqrt{2} \cos{(45^\circ + \alpha)}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const circ_45 = (M_PIq / 4.0Q);

    fp128 const s = cosq(circ_45 + x);

    fp128 const result = (sqrtq(2.0Q) * s);

    return result;
}
