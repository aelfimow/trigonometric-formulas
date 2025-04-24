#include "fp128.h"
#include "rhs.h"
#include "cotq.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\cot{\frac{\alpha}{2}} - \tan{\frac{\alpha}{2}}}{2}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const x_2 = (x / 2.0Q);

    fp128 const a = cotq(x_2);
    fp128 const b = tanq(x_2);

    fp128 const result = (a - b) / 2.0Q;

    return result;
}
