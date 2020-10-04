cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

# == C++ lang setup ==
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Default flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -pedantic")

# == Project ==
project(DECENT LANGUAGES CXX)

# == Output directories ==
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# == Targets ==
add_subdirectory(hw1)

# == Testing ==
enable_testing()
