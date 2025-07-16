#include "fp128.h"
#include "rhs.h"
#include "cotq.h"

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\cot^3{\alpha} - 3\cot{\alpha}}{3\cot^2{\alpha} - 1}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const ct = cotq(x);
    fp128 const ct2 = (ct * ct);
    fp128 const ct3 = (ct2 * ct);

    fp128 const result = (ct3 - (3.0Q * ct)) / ((3.0Q * ct2) - 1.0Q);

    return result;
}
