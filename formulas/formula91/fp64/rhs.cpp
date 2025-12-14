#include "fp64.h"
#include "rhs.h"
#include "cot.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      -\frac{\tan{\alpha} - \cot{\beta}}{\cot{\alpha} - \tan{\beta}}
 * @f]
 */
fp64 rhs(fp64 alpha, fp64 beta)
{
    fp64 const ta = tan(alpha);
    fp64 const tb = tan(beta);
    fp64 const ca = cot(alpha);
    fp64 const cb = cot(beta);

    fp64 const result = -(ta - cb) / (ca - tb);

    return result;
}
