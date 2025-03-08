#include "fp32.h"
#include "rhs.h"
#include "cotf.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\cot{\frac{\alpha}{2}} - \tan{\frac{\alpha}{2}}}{2}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const x_2 = (x / 2.0f);

    fp32 const a = cotf(x_2);
    fp32 const b = tanf(x_2);

    fp32 const result = (a - b) / 2.0f;

    return result;
}
