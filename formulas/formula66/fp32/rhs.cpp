#include "fp32.h"
#include "rhs.h"
#include "cotf.h"

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\cot^3{\alpha} - 3\cot{\alpha}}{3\cot^2{\alpha} - 1}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const ct = cotf(x);
    fp32 const ct2 = (ct * ct);
    fp32 const ct3 = (ct2 * ct);

    fp32 const result = (ct3 - (3.0f * ct)) / ((3.0f * ct2) - 1.0f);

    return result;
}
