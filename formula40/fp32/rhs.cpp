#include "fp32.h"
#include "rhs.h"
#include "cotf.h"


/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\cot^{2}{\frac{\alpha}{2}} - 1}{2\cot{\frac{\alpha}{2}}}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const x_2 = (x / 2.0f);

    fp32 const a = cotf(x_2);

    fp32 const result = ((a * a) - 1.0f) / (2.0f * a);

    return result;
}
