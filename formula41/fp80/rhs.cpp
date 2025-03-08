#include "fp80.h"
#include "rhs.h"
#include "cotl.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\cot{\frac{\alpha}{2}} - \tan{\frac{\alpha}{2}}}{2}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const x_2 = (x / 2.0L);

    fp80 const a = cotl(x_2);
    fp80 const b = tanl(x_2);

    fp80 const result = (a - b) / 2.0L;

    return result;
}
