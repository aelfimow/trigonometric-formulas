#include "fp128.h"
#include "rhs.h"
#include "cotq.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\cot{\alpha}}{\sqrt{1 + \cot^{2}{\alpha}}}
 * @f]
 */
fp128 rhs(fp128 alpha)
{
    fp128 const a = cotq(alpha);

    fp128 const result = a / sqrtq(1.0Q + (a * a));

    return result;
}
