#include "fp32.h"
#include "rhs.h"
#include "cotf.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      -\frac{\cot{\alpha} - \tan{\beta}}{\tan{\alpha} - \cot{\beta}}
 * @f]
 */
fp32 rhs(fp32 alpha, fp32 beta)
{
    fp32 const ta = tanf(alpha);
    fp32 const tb = tanf(beta);
    fp32 const ca = cotf(alpha);
    fp32 const cb = cotf(beta);

    fp32 const result = -(ca - tb) / (ta - cb);

    return result;
}
