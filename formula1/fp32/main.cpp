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

    std::vector<fp32> x_values { };

    fp32 const step = ((4.0f * std::numbers::pi_v<fp32>) / 1000.0f);
    fp32 const min = (-2.0f * std::numbers::pi_v<fp32>);
    fp32 const max = (2.0f * std::numbers::pi_v<fp32>);

    for (fp32 x = min; x <= max; x += step)
    {
        x_values.push_back(x);
    }

    for (fp32 const &x: x_values)
    {
        fp32 const lhs_value = lhs(x);
        fp32 const rhs_value = rhs();

        fp32 const diff = (lhs_value - rhs_value);

        bool const failed = (diff >= epsilon);

        if (failed)
        {
            std::cout
                << std::setprecision(10)
                << "Check failed for (fp32): x = "
                << x
                << "; diff = "
                << diff
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
