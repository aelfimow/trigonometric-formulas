#include "fp64.h"
#include "rhs.h"
#include "cot.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\tan{\alpha} + \tan{\beta}}{\cot{\alpha} + \cot{\beta}}
 * @f]
 */
fp64 rhs(fp64 alpha, fp64 beta)
{
    fp64 const a = tan(alpha);
    fp64 const b = tan(beta);
    fp64 const ca = cot(alpha);
    fp64 const cb = cot(beta);

    fp64 const result = (a + b) / (ca + cb);

    return result;
}
