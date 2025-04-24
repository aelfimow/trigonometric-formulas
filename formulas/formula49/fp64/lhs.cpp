#include "fp64.h"
#include "lhs.h"
#include "cot.h"

/**
 * Left Hand Side:
 *
 * @f[
 *     \cot{\frac{\alpha}{2}}
 * @f]
 */
fp64 lhs(fp64 x)
{
    fp64 const x_2 = (x / 2.0);

    fp64 const result = cot(x_2);

    return result;
}
