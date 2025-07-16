#include "fp80.h"
#include "rhs.h"
#include "cotl.h"

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\cot^3{\alpha} - 3\cot{\alpha}}{3\cot^2{\alpha} - 1}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const ct = cotl(x);
    fp80 const ct2 = (ct * ct);
    fp80 const ct3 = (ct2 * ct);

    fp80 const result = (ct3 - (3.0L * ct)) / ((3.0L * ct2) - 1.0L);

    return result;
}
