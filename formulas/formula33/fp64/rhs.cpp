#include "fp64.h"
#include "rhs.h"
#include "cot.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{\cot{\alpha} - \tan{\alpha}}{2}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const a = cot(x);
    fp64 const b = tan(x);

    fp64 const result = (a - b) / 2.0;

    return result;
}
