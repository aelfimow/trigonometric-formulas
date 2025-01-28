#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <vector>
#include <numbers>

#include "fp32.h"
#include "lhs.h"
#include "rhs.h"
#include "macheps.h"

int main(int, char *[])
{
    fp32 const epsilon = macheps();

    fp32 const delta_x = (2.0f * std::numbers::pi_v<fp32>);

    int const denominator = 1000;

    for (int nominator = -denominator; nominator <= denominator; ++nominator)
    {
        fp32 const k = (static_cast<fp32>(nominator) / static_cast<fp32>(denominator));

        fp32 const x = (k * delta_x);

        fp32 const lhs_value = lhs(x);
        fp32 const rhs_value = rhs(x);

        fp32 const diff = (lhs_value - rhs_value);

        bool const failed = (diff >= epsilon);

        if (failed)
        {
            std::cout
                << std::setprecision(10)
                << "Check failed for (fp32): x = " << x
                << "; diff = " << diff
                << "; " << nominator << "/" << denominator
                << std::endl;
        }
    }

    std::cout
        << std::setprecision(10)
        << "Epsilon (fp32): "
        << epsilon
        << std::endl;

    return EXIT_SUCCESS;
}
