#include "fp128.h"
#include "rhs.h"
#include "cotq.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{2}{\cot{\frac{\alpha}{2}} - \tan{\frac{\alpha}{2}}}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const x_2 = (x / 2.0Q);

    fp128 const result = 2.0Q / (cotq(x_2) - tanq(x_2));

    return result;
}
