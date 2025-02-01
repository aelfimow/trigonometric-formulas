#include "fp64.h"
#include "lhs.h"
#include "rhs.h"
#include "macheps.h"

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <vector>
#include <numbers>
#include <cmath>


int main(int, char *[])
{
    fp64 const epsilon = macheps();

    fp64 const delta_x = (2.0 * std::numbers::pi_v<fp64>);

    int const denominator = 1000;

    for (int nominator = -denominator; nominator <= denominator; ++nominator)
    {
        fp64 const k = (static_cast<fp64>(nominator) / static_cast<fp64>(denominator));

        fp64 const x = (k * delta_x);

        fp64 const lhs_value = lhs(x);
        fp64 const rhs_value = rhs();

        fp64 const diff = fabs(lhs_value - rhs_value);

        bool const failed = (diff >= epsilon);

        if (failed)
        {
            std::cout
                << std::setprecision(10)
                << "Check failed for (fp64): x = " << x
                << "; diff = " << diff
                << "; " << nominator << "/" << denominator
                << std::endl;
        }
    }

    std::cout
        << std::setprecision(10)
        << "Epsilon (fp64): "
        << epsilon
        << std::endl;

    return EXIT_SUCCESS;
}
