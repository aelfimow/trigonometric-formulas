#include "fp80.h"
#include "rhs.h"
#include "cotl.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      -\frac{\cot{\alpha} - \tan{\beta}}{\tan{\alpha} - \cot{\beta}}
 * @f]
 */
fp80 rhs(fp80 alpha, fp80 beta)
{
    fp80 const ta = tanl(alpha);
    fp80 const tb = tanl(beta);
    fp80 const ca = cotl(alpha);
    fp80 const cb = cotl(beta);

    fp80 const result = -(ca - tb) / (ta - cb);

    return result;
}
