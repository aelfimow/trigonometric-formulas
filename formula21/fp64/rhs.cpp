#include "fp64.h"
#include "rhs.h"
#include "cot.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\cot{\alpha}}{\sqrt{1 + \cot^{2}{\alpha}}}
 * @f]
 */
fp64 rhs(fp64 alpha)
{
    fp64 const a = cot(alpha);

    fp64 const result = a / sqrt(1.0 + (a * a));

    return result;
}
