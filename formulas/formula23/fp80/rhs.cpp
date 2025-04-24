#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\sqrt{1 - \cos^{2}{\alpha}}}{\cos{\alpha}}
 * @f]
 */
fp80 rhs(fp80 alpha)
{
    fp80 const a = cosl(alpha);

    fp80 const result = sqrtl(1.0L - (a * a)) / a;

    return result;
}
