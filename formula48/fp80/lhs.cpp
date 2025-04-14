#include "fp80.h"
#include "lhs.h"
#include "cotl.h"

/**
 * Left Hand Side:
 *
 * @f[
 *     \cot{\frac{\alpha}{2}}
 * @f]
 */
fp80 lhs(fp80 x)
{
    fp80 const x_2 = (x / 2.0L);

    fp80 const result = cotl(x_2);

    return result;
}
