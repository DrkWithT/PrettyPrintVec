# top CMakeLists

cmake_minimum_required(VERSION 3.27)

project("PrettyPrintVec" LANGUAGES CXX VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_compile_options(-Wall -Wextra -Wpedantic -Werror -g -Og)

set(EXECUTABLE_OUTPUT_PATH "${CMAKE_HOME_DIRECTORY}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_HOME_DIRECTORY}/build")

include_directories("${CMAKE_HOME_DIRECTORY}/include")
add_subdirectory(src)
