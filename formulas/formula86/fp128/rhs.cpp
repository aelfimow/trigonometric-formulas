#include "fp128.h"
#include "rhs.h"
#include "cotq.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\tan{\alpha} + \tan{\beta}}{\cot{\alpha} + \cot{\beta}}
 * @f]
 */
fp128 rhs(fp128 alpha, fp128 beta)
{
    fp128 const a = tanq(alpha);
    fp128 const b = tanq(beta);
    fp128 const ca = cotq(alpha);
    fp128 const cb = cotq(beta);

    fp128 const result = (a + b) / (ca + cb);

    return result;
}
