#include "fp80.h"
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
    fp80 const epsilon = macheps();

    fp80 const delta_x = (2.0L * std::numbers::pi_v<fp80>);

    int const denominator = 1000;

    for (int nominator = -denominator; nominator <= denominator; ++nominator)
    {
        fp80 const k = (static_cast<fp80>(nominator) / static_cast<fp80>(denominator));

        fp80 const x = (k * delta_x);

        fp80 const lhs_value = lhs(x);
        fp80 const rhs_value = rhs();

        fp80 const diff = fabsl(lhs_value - rhs_value);

        bool const failed = (diff >= epsilon);

        if (failed)
        {
            std::cout
                << std::setprecision(10)
                << "Check failed for (fp80): x = " << x
                << "; diff = " << diff
                << "; " << nominator << "/" << denominator
                << std::endl;
        }
    }

    std::cout
        << std::setprecision(10)
        << "Epsilon (fp80): "
        << epsilon
        << std::endl;

    return EXIT_SUCCESS;
}
