#include "fp64.h"
#include "lhs.h"
#include "cot.h"

/**
 * Left Hand Side:
 *
 * @f[
 *     \cot{\alpha}
 * @f]
 */
fp64 lhs(fp64 alpha)
{
    fp64 const result = cot(alpha);

    return result;
}
