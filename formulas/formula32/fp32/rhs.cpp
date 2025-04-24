#include "fp32.h"
#include "rhs.h"
#include "cotf.h"


/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\cot^{2}{\alpha} - 1}{2\cot{\alpha}}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const a = cotf(x);

    fp32 const result = ((a * a) - 1.0f) / (2.0f * a);

    return result;
}
