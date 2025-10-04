#include "fp80.h"
#include "lhs.h"

#include <numbers>
#include <cmath>

/**
 * Left Hand Side:
 *
 * @f[
 *     \sqrt{2} \sin{(45^\circ + \alpha)}
 * @f]
 */
fp80 lhs(fp80 x)
{
    fp80 const circ_45 = (std::numbers::pi_v<fp80> / 4.0L);

    fp80 const s = sinl(circ_45 + x);

    fp80 const result = (sqrtl(2.0) * s);

    return result;
}
