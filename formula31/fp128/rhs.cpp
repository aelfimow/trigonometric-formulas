#include "fp128.h"
#include "rhs.h"
#include "cotq.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{2}{\cot{\alpha} - \tan{\alpha}}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const result = 2.0Q / (cotq(x) - tanq(x));

    return result;
}
