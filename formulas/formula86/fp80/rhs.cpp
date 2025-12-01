#include "fp80.h"
#include "rhs.h"
#include "cotl.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\tan{\alpha} + \tan{\beta}}{\cot{\alpha} + \cot{\beta}}
 * @f]
 */
fp80 rhs(fp80 alpha, fp80 beta)
{
    fp80 const a = tanl(alpha);
    fp80 const b = tanl(beta);
    fp80 const ca = cotl(alpha);
    fp80 const cb = cotl(beta);

    fp80 const result = (a + b) / (ca + cb);

    return result;
}
