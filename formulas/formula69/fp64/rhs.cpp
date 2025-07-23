#include "fp64.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      2 \cos{\frac{\alpha + \beta}{2}} \sin{\frac{\alpha - \beta}{2}}
 * @f]
 */
fp64 rhs(fp64 alpha, fp64 beta)
{
    fp64 const a = cos((alpha + beta) / 2.0);
    fp64 const b = sin((alpha - beta) / 2.0);

    fp64 const result = (2.0 * a * b);

    return result;
}
