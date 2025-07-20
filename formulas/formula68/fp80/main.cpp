#include "fp80.h"
#include "lhs.h"
#include "rhs.h"
#include "macheps.h"
#include "fpexception.h"

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <vector>
#include <numbers>
#include <cmath>
#include <cfenv>


int main(int, char *[])
{
    int const digits = 21;

    fp80 const epsilon = macheps();

    fp80 const delta_alpha = (2.0L * std::numbers::pi_v<fp80>);
    fp80 const delta_beta = (0.5L * std::numbers::pi_v<fp80>);

    size_t failed_cnt = 0U;
    size_t ok_cnt = 0U;
    int const denominator = 1000;

    for (int nominator = -denominator; nominator <= denominator; ++nominator)
    {
        fp80 const k = (static_cast<fp80>(nominator) / static_cast<fp80>(denominator));

        fp80 const alpha = (k * delta_alpha);
        fp80 const beta = (k * delta_beta);

        std::feclearexcept(FE_ALL_EXCEPT);
        fp80 const lhs_value = lhs(alpha, beta);
        bool const lhs_exception = fpexception();

        std::feclearexcept(FE_ALL_EXCEPT);
        fp80 const rhs_value = rhs(alpha, beta);
        bool const rhs_exception = fpexception();

        if (lhs_exception or rhs_exception)
        {
            if (lhs_exception)
            {
                std::cout
                    << "Left hand side: floating point exception"
                    << "; " << nominator << "/" << denominator
                    << std::endl;
            }

            if (rhs_exception)
            {
                std::cout
                    << "Right hand side: floating point exception"
                    << "; " << nominator << "/" << denominator
                    << std::endl;
            }

            failed_cnt += 1U;

            continue;
        }

        fp80 const diff = fabsl(lhs_value - rhs_value);

        bool const failed = (diff >= epsilon);

        failed_cnt += failed ? 1U : 0U;
        ok_cnt += not failed ? 1U : 0U;

        if (failed)
        {
            std::cout
                << std::setprecision(digits)
                << "Check failed for (fp80): alpha = " << alpha
                << "; beta = " << beta
                << "; diff = " << diff
                << "; " << nominator << "/" << denominator
                << std::endl;
        }
    }

    std::cout
        << std::setprecision(digits)
        << "Epsilon (fp80): "
        << epsilon
        << std::endl;

    std::cout
        << "Failed: "
        << failed_cnt
        << "; OK: "
        << ok_cnt
        << std::endl;

    return EXIT_SUCCESS;
}
