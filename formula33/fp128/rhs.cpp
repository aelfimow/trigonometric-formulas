#include "fp128.h"
#include "rhs.h"
#include "cotq.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\cot{\alpha} - \tan{\alpha}}{2}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const a = cotq(x);
    fp128 const b = tanq(x);

    fp128 const result = (a - b) / 2.0Q;

    return result;
}
