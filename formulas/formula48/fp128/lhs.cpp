#include "fp128.h"
#include "lhs.h"
#include "cotq.h"

/**
 * Left Hand Side:
 *
 * @f[
 *     \cot{\frac{\alpha}{2}}
 * @f]
 */
fp128 lhs(fp128 x)
{
    fp128 const x_2 = (x / 2.0Q);

    fp128 const result = cotq(x_2);

    return result;
}
