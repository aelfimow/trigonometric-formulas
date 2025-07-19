#include "fp128.h"
#include "rhs.h"
#include "cotq.h"

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\cot^4{\alpha} - 6\cot^2{\alpha} + 1}{4\cot^3{\alpha} - 4\cot{\alpha}}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const ct = cotq(x);
    fp128 const ct2 = (ct * ct);
    fp128 const ct3 = (ct2 * ct);
    fp128 const ct4 = (ct3 * ct);

    fp128 const result = (ct4 - (6.0Q * ct2) + 1.0Q) / ((4.0Q * ct3) - (4.0Q * ct));

    return result;
}
