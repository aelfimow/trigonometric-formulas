#include "fp128.h"
#include "rhs.h"
#include "cotq.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\cot{\alpha} + \tan{\beta}}{\tan{\alpha} + \cot{\beta}}
 * @f]
 */
fp128 rhs(fp128 alpha, fp128 beta)
{
    fp128 const ta = tanq(alpha);
    fp128 const tb = tanq(beta);
    fp128 const ca = cotq(alpha);
    fp128 const cb = cotq(beta);

    fp128 const result = (ca + tb) / (ta + cb);

    return result;
}
