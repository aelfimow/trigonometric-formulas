#include "fp80.h"
#include "lhs.h"
#include "cotl.h"

/**
 * Left Hand Side:
 *
 * @f[
 *     \cot{\alpha} \cot{\beta}
 * @f]
 */
fp80 lhs(fp80 alpha, fp80 beta)
{
    fp80 const a = cotl(alpha);
    fp80 const b = cotl(beta);

    fp80 const result = (a * b);

    return result;
}
