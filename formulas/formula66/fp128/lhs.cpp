#include "fp128.h"
#include "lhs.h"
#include "cotq.h"

/**
 * Left Hand Side:
 *
 * @f[
 *     \cot{3\alpha}
 * @f]
 */
fp128 lhs(fp128 x)
{
    fp128 const result = cotq(3.0Q * x);

    return result;
}
