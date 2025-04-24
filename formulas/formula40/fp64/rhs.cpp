#include "fp64.h"
#include "rhs.h"
#include "cot.h"


/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\cot^{2}{\frac{\alpha}{2}} - 1}{2\cot{\frac{\alpha}{2}}}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const x_2 = (x / 2.0);

    fp64 const a = cot(x_2);

    fp64 const result = ((a * a) - 1.0) / (2.0 * a);

    return result;
}
