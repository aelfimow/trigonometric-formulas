#include "fp64.h"
#include "rhs.h"
#include "cot.h"

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\cot^4{\alpha} - 6\cot^2{\alpha} + 1}{4\cot^3{\alpha} - 4\cot{\alpha}}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const ct = cot(x);
    fp64 const ct2 = (ct * ct);
    fp64 const ct3 = (ct2 * ct);
    fp64 const ct4 = (ct3 * ct);

    fp64 const result = (ct4 - (6.0 * ct2) + 1.0) / ((4.0 * ct3) - (4.0 * ct));

    return result;
}
