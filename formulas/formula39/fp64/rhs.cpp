#include "fp64.h"
#include "rhs.h"
#include "cot.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{2}{\cot{\frac{\alpha}{2}} - \tan{\frac{\alpha}{2}}}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const x_2 = (x / 2.0);

    fp64 const result = 2.0 / (cot(x_2) - tan(x_2));

    return result;
}
