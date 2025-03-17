#include "fp128.h"
#include "to_str.h"

#include <vector>
#include <quadmath.h>

std::string to_str(fp128 const value)
{
    std::vector<char> buffer(256U);

    ::quadmath_snprintf(buffer.data(), buffer.size(), "%.36Qe", value);

    std::string const str(buffer.data());

    return str;
}
