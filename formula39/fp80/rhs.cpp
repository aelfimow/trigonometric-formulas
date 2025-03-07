#include "fp80.h"
#include "rhs.h"
#include "cotl.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{2}{\cot{\frac{\alpha}{2}} - \tan{\frac{\alpha}{2}}}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const x_2 = (x / 2.0L);

    fp80 const result = 2.0L / (cotl(x_2) - tanl(x_2));

    return result;
}
