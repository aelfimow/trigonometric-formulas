#include "fp128.h"
#include "rhs.h"
#include "cotq.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\tan{\alpha} + \cot{\beta}}{\cot{\alpha} + \tan{\beta}}
 * @f]
 */
fp128 rhs(fp128 alpha, fp128 beta)
{
    fp128 const ta = tanq(alpha);
    fp128 const tb = tanq(beta);
    fp128 const ca = cotq(alpha);
    fp128 const cb = cotq(beta);

    fp128 const result = (ta + cb) / (ca + tb);

    return result;
}
