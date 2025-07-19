#include "fp32.h"
#include "rhs.h"
#include "cotf.h"

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\cot^4{\alpha} - 6\cot^2{\alpha} + 1}{4\cot^3{\alpha} - 4\cot{\alpha}}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const ct = cotf(x);
    fp32 const ct2 = (ct * ct);
    fp32 const ct3 = (ct2 * ct);
    fp32 const ct4 = (ct3 * ct);

    fp32 const result = (ct4 - (6.0f * ct2) + 1.0f) / ((4.0f * ct3) - (4.0f * ct));

    return result;
}
