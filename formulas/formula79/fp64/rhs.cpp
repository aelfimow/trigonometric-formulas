#include "fp64.h"
#include "rhs.h"

#include <numbers>
#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sqrt{2} \sin{(45^\circ - \alpha)}
 * @f]
 */
fp64 rhs(fp64 x)
{
    fp64 const circ_45 = (std::numbers::pi_v<fp64> / 4.0);

    fp64 const s = sin(circ_45 - x);

    fp64 const result = (sqrt(2.0) * s);

    return result;
}
