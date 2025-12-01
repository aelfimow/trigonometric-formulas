#include "fp32.h"
#include "rhs.h"
#include "cotf.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\tan{\alpha} + \tan{\beta}}{\cot{\alpha} + \cot{\beta}}
 * @f]
 */
fp32 rhs(fp32 alpha, fp32 beta)
{
    fp32 const a = tanf(alpha);
    fp32 const b = tanf(beta);
    fp32 const ca = cotf(alpha);
    fp32 const cb = cotf(beta);

    fp32 const result = (a + b) / (ca + cb);

    return result;
}
