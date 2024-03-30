#pragma once

#include <string>

namespace printvec
{
    template <typename T>
    constexpr const char* singular_name = "unknown";

    template <>
    constexpr const char* singular_name<bool> = "bool";

    template <>
    constexpr const char* singular_name<int> = "int";

    template <>
    constexpr const char* singular_name<float> = "float";

    template <>
    constexpr const char* singular_name<double> = "double";

    template <>
    constexpr const char* singular_name<std::string> = "std::string";
}
