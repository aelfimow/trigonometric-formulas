#include "fp80.h"
#include "lhs.h"

#include <cmath>

fp80 lhs(fp80 x)
{
    fp80 const x1 = sinl(x);
    fp80 const x2 = cosl(x);

    fp80 const result = (x1 * x1) + (x2 * x2);

    return result;
}
