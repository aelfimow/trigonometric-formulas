#include "fp32.h"
#include "lhs.h"
#include "cotf.h"

/**
 * Left Hand Side:
 *
 * @f[
 *     \cot{\alpha}
 * @f]
 */
fp32 lhs(fp32 alpha)
{
    fp32 const result = cotf(alpha);

    return result;
}
