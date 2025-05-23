#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\cos{\alpha}}{\sqrt{1 - \cos^{2}{\alpha}}}
 * @f]
 */
fp80 rhs(fp80 alpha)
{
    fp80 const a = cosl(alpha);

    fp80 const result = a / sqrtl(1.0L - (a * a));

    return result;
}
