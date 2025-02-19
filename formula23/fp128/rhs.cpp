#include "fp128.h"
#include "rhs.h"

#include <quadmath.h>

/**
 * Right Hand Side:
 *
 * @f[
 *     \frac{\sqrt{1 - \cos^{2}{\alpha}}}{\cos{\alpha}}
 * @f]
 */
fp128 rhs(fp128 alpha)
{
    fp128 const a = cosq(alpha);

    fp128 const result = sqrtq(1.0Q - (a * a)) / a;

    return result;
}
