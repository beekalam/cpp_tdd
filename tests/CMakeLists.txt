set(Boost_USE_STATIC_LIBS OFF)
find_package(Boost COMPONENTS regex program_options unit_test_framework)
include_directories(${Boost_INCLUDE_DIRS})

add_executable(daily_coding_tests daily_coding_tests.cpp hash_set_test.cpp)
target_link_libraries(daily_coding_tests ${Boost_LIBRARIES})


add_executable(hash_set_test hash_set_test.cpp)
target_link_libraries(hash_set_test ${Boost_LIBRARIES})

