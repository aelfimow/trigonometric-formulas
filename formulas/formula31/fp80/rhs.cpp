#include "fp80.h"
#include "rhs.h"
#include "cotl.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{2}{\cot{\alpha} - \tan{\alpha}}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const result = 2.0L / (cotl(x) - tanl(x));

    return result;
}
