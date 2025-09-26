#include "fp80.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \tan{\alpha} - \tan{\beta}
 * @f]
 */
fp80 lhs(fp80 alpha, fp80 beta)
{
    fp80 const a = tanl(alpha);
    fp80 const b = tanl(beta);

    fp80 const result = (a - b);

    return result;
}
