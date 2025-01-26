#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <vector>
#include <numbers>

#include "fp128.h"
#include "lhs.h"
#include "rhs.h"
#include "macheps.h"

#include <quadmath.h>

namespace
{
    std::string to_str(fp128 const value)
    {
        std::vector<char> buffer(256U);

        ::quadmath_snprintf(buffer.data(), buffer.size(), "%.36Qe", value);

        std::string const str(buffer.data());

        return str;
    }
}


int main(int, char *[])
{
    fp128 const epsilon = macheps();

    fp128 const delta_x = (2.0Q * M_PIq);

    int const denominator = 1000;

    for (int nominator = -denominator; nominator <= denominator; ++nominator)
    {
        fp128 const k = (static_cast<fp128>(nominator) / static_cast<fp128>(denominator));

        fp128 const x = (k * delta_x);

        fp128 const lhs_value = lhs(x);
        fp128 const rhs_value = rhs();

        fp128 const diff = (lhs_value - rhs_value);

        bool const failed = (diff >= epsilon);

        if (failed)
        {
            std::cout
                << "Check failed for (fp128): x = " << to_str(x)
                << "; diff = " << to_str(diff)
                << "; " << nominator << "/" << denominator
                << std::endl;
        }
    }

    std::cout
        << "Epsilon (fp128): "
        << to_str(epsilon)
        << std::endl;

    return EXIT_SUCCESS;
}
