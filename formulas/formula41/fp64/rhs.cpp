#include "fp64.h"
#include "rhs.h"
#include "cot.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\cot{\frac{\alpha}{2}} - \tan{\frac{\alpha}{2}}}{2}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const x_2 = (x / 2.0);

    fp64 const a = cot(x_2);
    fp64 const b = tan(x_2);

    fp64 const result = (a - b) / 2.0;

    return result;
}
