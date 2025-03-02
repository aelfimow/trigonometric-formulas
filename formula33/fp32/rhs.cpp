#include "fp32.h"
#include "rhs.h"
#include "cotf.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\cot{\alpha} - \tan{\alpha}}{2}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const a = cotf(x);
    fp32 const b = tanf(x);

    fp32 const result = (a - b) / 2.0f;

    return result;
}
