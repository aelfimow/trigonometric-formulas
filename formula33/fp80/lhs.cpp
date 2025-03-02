#include "fp80.h"
#include "lhs.h"
#include "cotl.h"


/**
 * Left Hand Side:
 *
 * @f[
 *     \cot{2\alpha}
 * @f]
 */
fp80 lhs(fp80 x)
{
    fp80 const result = cotl(2.0L * x);

    return result;
}
