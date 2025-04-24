#include "fp32.h"
#include "rhs.h"
#include "cotf.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{2}{\cot{\frac{\alpha}{2}} - \tan{\frac{\alpha}{2}}}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const x_2 = (x / 2.0f);

    fp32 const result = 2.0f / (cotf(x_2) - tanf(x_2));

    return result;
}
