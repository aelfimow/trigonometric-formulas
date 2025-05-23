#include "fp80.h"
#include "lhs.h"
#include "cotl.h"

/**
 * Left Hand Side:
 *
 * @f[
 *     \cot{\alpha}
 * @f]
 */
fp80 lhs(fp80 x)
{
    fp80 const result = cotl(x);

    return result;
}
