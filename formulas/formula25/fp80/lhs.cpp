#include "fp80.h"
#include "lhs.h"
#include "cotl.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \cot{\alpha}
 * @f]
 */
fp80 lhs(fp80 alpha)
{
    fp80 const result = cotl(alpha);

    return result;
}
