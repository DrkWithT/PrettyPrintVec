#pragma once

#include <concepts>
#include <string>
#include <iostream>

#include "typenames.hpp"

namespace printvec
{
    template <typename T>
    concept IsString = std::same_as<T, std::string>;

    template <typename T>
    concept IsSingular = std::same_as<T, bool> || std::integral<T> || std::floating_point<T>;

    template <typename T>
    concept IsIterableCont = requires(T arg)
    {
        {arg.begin()};
        {arg.end()};
    } && !IsString<T>;

    template <typename T>
    concept IsOtherPrintable = requires(T arg)
    {
        {std::cout << arg};
    } && !IsString<T> && !IsSingular<T>;

    template <IsSingular T>
    void printThing(const T& arg)
    {
        std::cout << '(' << singular_name<T> << ") " << arg;
    }

    template <IsString S>
    void printThing(const S& arg)
    {
        std::cout << '(' << singular_name<S> << ") \"" << arg << '\"';
    }

    template <IsOtherPrintable O>
    void printThing(const O& other)
    {
        std::cout << other;
    }

    template <IsIterableCont C>
    void printThing(const C& arg)
    {
        std::cout << "[ ";

        size_t n = arg.size();

        for (const auto& item : arg)
        {
            printThing(item);

            n -= 1;

            if (n > 0)
                std::cout << ", ";
            else
                std::cout << " ";
        }

        std::cout << ']';
    }

    void printThing(...)
    {
        std::cout << "(anything) ?";
    }
}
