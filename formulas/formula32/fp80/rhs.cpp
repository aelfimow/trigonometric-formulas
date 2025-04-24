#include "fp80.h"
#include "rhs.h"
#include "cotl.h"


/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\cot^{2}{\alpha} - 1}{2\cot{\alpha}}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const a = cotl(x);

    fp80 const result = ((a * a) - 1.0L) / (2.0L * a);

    return result;
}
