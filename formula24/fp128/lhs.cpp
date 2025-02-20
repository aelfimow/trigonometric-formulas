#include "fp128.h"
#include "lhs.h"
#include "cotq.h"

/**
 * Left Hand Side:
 *
 * @f[
 *     \cot{\alpha}
 * @f]
 */
fp128 lhs(fp128 alpha)
{
    fp128 const result = cotq(alpha);

    return result;
}
