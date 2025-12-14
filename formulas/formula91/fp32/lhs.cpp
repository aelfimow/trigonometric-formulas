#include "fp32.h"
#include "lhs.h"
#include "cotf.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \tan{\alpha} \cot{\beta}
 * @f]
 */
fp32 lhs(fp32 alpha, fp32 beta)
{
    fp32 const a = tanf(alpha);
    fp32 const b = cotf(beta);

    fp32 const result = (a * b);

    return result;
}
