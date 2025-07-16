#include "fp64.h"
#include "rhs.h"
#include "cot.h"

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\cot^3{\alpha} - 3\cot{\alpha}}{3\cot^2{\alpha} - 1}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const ct = cot(x);
    fp64 const ct2 = (ct * ct);
    fp64 const ct3 = (ct2 * ct);

    fp64 const result = (ct3 - (3.0 * ct)) / ((3.0 * ct2) - 1.0);

    return result;
}
