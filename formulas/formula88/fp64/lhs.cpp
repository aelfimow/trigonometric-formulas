#include "fp64.h"
#include "lhs.h"
#include "cot.h"

/**
 * Left Hand Side:
 *
 * @f[
 *     \cot{\alpha} \cot{\beta}
 * @f]
 */
fp64 lhs(fp64 alpha, fp64 beta)
{
    fp64 const a = cot(alpha);
    fp64 const b = cot(beta);

    fp64 const result = (a * b);

    return result;
}
