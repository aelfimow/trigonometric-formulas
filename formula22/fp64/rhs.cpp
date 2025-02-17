#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\sin{\alpha}}{\sqrt{1 - \sin^{2}{\alpha}}}
 * @f]
 */
fp64 rhs(fp64 alpha)
{
    fp64 const a = sin(alpha);

    fp64 const result = a / sqrt(1.0 - (a * a));

    return result;
}
