#include "fp80.h"
#include "rhs.h"

#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *      2 \cos{\frac{\alpha + \beta}{2}} \cos{\frac{\alpha - \beta}{2}}
 * @f]
 */
fp80 rhs(fp80 alpha, fp80 beta)
{
    fp80 const a = cosl((alpha + beta) / 2.0L);
    fp80 const b = cosl((alpha - beta) / 2.0L);

    fp80 const result = (2.0L * a * b);

    return result;
}
