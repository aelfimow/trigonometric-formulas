#include "fp64.h"
#include "rhs.h"
#include "cot.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      \frac{2}{\cot{\alpha} - \tan{\alpha}}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const result = 2.0 / (cot(x) - tan(x));

    return result;
}
