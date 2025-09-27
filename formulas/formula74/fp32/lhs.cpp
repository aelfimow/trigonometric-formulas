#include "fp32.h"
#include "lhs.h"
#include "cotf.h"

/**
 * Left Hand Side:
 *
 * @f[
 *     \cot{\alpha} + \cot{\beta}
 * @f]
 */
fp32 lhs(fp32 alpha, fp32 beta)
{
    fp32 const a = cotf(alpha);
    fp32 const b = cotf(beta);

    fp32 const result = (a - b);

    return result;
}
