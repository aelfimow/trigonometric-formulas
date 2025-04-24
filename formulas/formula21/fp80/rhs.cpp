#include "fp80.h"
#include "rhs.h"
#include "cotl.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\cot{\alpha}}{\sqrt{1 + \cot^{2}{\alpha}}}
 * @f]
 */
fp80 rhs(fp80 alpha)
{
    fp80 const a = cotl(alpha);

    fp80 const result = a / sqrtl(1.0L + (a * a));

    return result;
}
