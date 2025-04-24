#include "fp128.h"
#include "rhs.h"
#include "cotq.h"


/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\cot^{2}{\alpha} - 1}{2\cot{\alpha}}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const a = cotq(x);

    fp128 const result = ((a * a) - 1.0Q) / (2.0Q * a);

    return result;
}
