#include "fp32.h"
#include "lhs.h"
#include "cotf.h"

/**
 * Left Hand Side:
 *
 * @f[
 *     \cot{4\alpha}
 * @f]
 */
fp32 lhs(fp32 x)
{
    fp32 const result = cotf(4.0f * x);

    return result;
}
