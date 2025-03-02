#include "fp64.h"
#include "rhs.h"
#include "cot.h"


/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\cot^{2}{\alpha} - 1}{2\cot{\alpha}}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const a = cot(x);

    fp64 const result = ((a * a) - 1.0) / (2.0 * a);

    return result;
}
