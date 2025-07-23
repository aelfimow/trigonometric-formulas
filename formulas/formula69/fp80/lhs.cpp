#include "fp80.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \sin{\alpha} - \sin{\beta}
 * @f]
 */
fp80 lhs(fp80 alpha, fp80 beta)
{
    fp80 const a = sinl(alpha);
    fp80 const b = sinl(beta);

    fp80 const result = (a - b);

    return result;
}
