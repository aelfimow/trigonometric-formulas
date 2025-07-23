#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *      2 \cos{\frac{\alpha + \beta}{2}} \sin{\frac{\alpha - \beta}{2}}
 * @f]
 */
fp128 rhs(fp128 alpha, fp128 beta)
{
    fp128 const a = cosq((alpha + beta) / 2.0Q);
    fp128 const b = sinq((alpha - beta) / 2.0Q);

    fp128 const result = (2.0Q * a * b);

    return result;
}
