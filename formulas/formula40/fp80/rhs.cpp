#include "fp80.h"
#include "rhs.h"
#include "cotl.h"


/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\cot^{2}{\frac{\alpha}{2}} - 1}{2\cot{\frac{\alpha}{2}}}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const x_2 = (x / 2.0L);

    fp80 const a = cotl(x_2);

    fp80 const result = ((a * a) - 1.0L) / (2.0L * a);

    return result;
}
