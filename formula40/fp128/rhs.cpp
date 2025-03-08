#include "fp128.h"
#include "rhs.h"
#include "cotq.h"


/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\cot^{2}{\frac{\alpha}{2}} - 1}{2\cot{\frac{\alpha}{2}}}
 * @f]
 */
fp128 rhs(fp128 x)
{
    fp128 const x_2 = (x / 2.0Q);

    fp128 const a = cotq(x_2);

    fp128 const result = ((a * a) - 1.0Q) / (2.0Q * a);

    return result;
}
