/**
 * @file main.cpp
 * @author DrkWithT
 * @brief Implements pretty printer for vector<T>
 * @version 0.0.1
 * @date 2024-03-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <string>
#include <vector>
#include "printvec.hpp"

int main()
{
    std::vector<int> nums {1, 2, 3};
    std::vector<double> nums2 {1.1, 2.2, 3.3};
    std::vector<std::vector<int>> nums3 {{1, 2}, {3, 4}};
    std::vector<std::string> words {"hello", "bye"};

    printvec::printThing(nums);
    std::cout << '\n';
    printvec::printThing(nums2);
    std::cout << '\n';
    printvec::printThing(nums3);
    std::cout << '\n';
    printvec::printThing(words);
    std::cout << '\n';
}
