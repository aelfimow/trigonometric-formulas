#include "fp128.h"
#include "lhs.h"
#include "cotq.h"

/**
 * Left Hand Side:
 *
 * @f[
 *     \cot{\alpha} + \cot{\beta}
 * @f]
 */
fp128 lhs(fp128 alpha, fp128 beta)
{
    fp128 const a = cotq(alpha);
    fp128 const b = cotq(beta);

    fp128 const result = (a + b);

    return result;
}
