#include "fp80.h"
#include "lhs.h"

#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \sin^{3}{\alpha}
 * @f]
 */
fp80 lhs(fp80 x)
{
    fp80 const result = powl(sinl(x), 3.0L);

    return result;
}
