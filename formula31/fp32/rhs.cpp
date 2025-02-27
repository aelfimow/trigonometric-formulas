#include "fp32.h"
#include "rhs.h"
#include "cotf.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{2}{\cot{\alpha} - \tan{\alpha}}
 * @f]
 */
fp32 rhs(fp32 x)
{
    fp32 const result = 2.0f / (cotf(x) - tanf(x));

    return result;
}
