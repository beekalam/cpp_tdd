cmake_minimum_required(VERSION 3.12)
project(untitled)
enable_testing()
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(dailycoding)
include_directories(dailycoding)

add_subdirectory(data_structures)
include_directories(data_structures)

add_subdirectory(problems)
include_directories(problems)

add_executable(untitled main.cpp dailycoding/Problem57.cpp dailycoding/Problem57.h data_structures/HashSet.cpp data_structures/HashSet.h )
add_subdirectory(tests)
