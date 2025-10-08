#include "fp32.h"
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
fp32 rhs(fp32 x)
{
    fp32 const circ_45 = (std::numbers::pi_v<fp32> / 4.0f);

    fp32 const s = sinf(circ_45 - x);

    fp32 const result = (sqrtf(2.0f) * s);

    return result;
}
