#include "fp80.h"
#include "rhs.h"

#include <numbers>
#include <cmath>

/**
 * Right Hand Side:
 *
 * @f[
 *     \sqrt{2} \cos{(45^\circ - \alpha)}
 * @f]
 */
fp80 rhs(fp80 x)
{
    fp80 const circ_45 = (std::numbers::pi_v<fp80> / 4.0L);

    fp80 const s = cosl(circ_45 - x);

    fp80 const result = (sqrtl(2.0) * s);

    return result;
}
