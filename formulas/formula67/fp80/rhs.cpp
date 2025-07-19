#include "fp80.h"
#include "rhs.h"
#include "cotl.h"

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\cot^4{\alpha} - 6\cot^2{\alpha} + 1}{4\cot^3{\alpha} - 4\cot{\alpha}}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const ct = cotl(x);
    fp80 const ct2 = (ct * ct);
    fp80 const ct3 = (ct2 * ct);
    fp80 const ct4 = (ct3 * ct);

    fp80 const result = (ct4 - (6.0L * ct2) + 1.0L) / ((4.0L * ct3) - (4.0L * ct));

    return result;
}
