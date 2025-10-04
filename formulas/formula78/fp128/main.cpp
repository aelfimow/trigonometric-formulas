#include "fp128.h"
#include "lhs.h"
#include "rhs.h"
#include "macheps.h"
#include "to_str.h"

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <numbers>
#include <quadmath.h>


int main(int, char *[])
{
    fp128 const epsilon = macheps();

    fp128 const delta_x = (2.0Q * M_PIq);

    size_t failed_cnt = 0U;
    size_t ok_cnt = 0U;
    int const denominator = 1000;

    for (int nominator = -denominator; nominator <= denominator; ++nominator)
    {
        fp128 const k = (static_cast<fp128>(nominator) / static_cast<fp128>(denominator));

        fp128 const x = (k * delta_x);

        fp128 const lhs_value = lhs(x);
        fp128 const rhs_value = rhs(x);

        fp128 const diff = fabsq(lhs_value - rhs_value);

        bool const failed = (diff >= epsilon);

        failed_cnt += failed ? 1U : 0U;
        ok_cnt += not failed ? 1U : 0U;

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

    std::cout
        << "Failed: "
        << failed_cnt
        << "; OK: "
        << ok_cnt
        << std::endl;

    return EXIT_SUCCESS;
}
