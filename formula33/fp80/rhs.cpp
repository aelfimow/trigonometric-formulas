#include "fp80.h"
#include "rhs.h"
#include "cotl.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\cot{\alpha} - \tan{\alpha}}{2}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const a = cotl(x);
    fp80 const b = tanl(x);

    fp80 const result = (a - b) / 2.0L;

    return result;
}
