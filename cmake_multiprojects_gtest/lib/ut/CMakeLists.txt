# CMake is case-nonsensitive for function, macros
# but case-sensitive for function arguments!
cmake_minimum_required(VERSION 3.15)

add_executable(lib_tests ut.cpp)

# link our application with the library built
target_link_libraries(lib_tests awesomeLib)

target_link_libraries(lib_tests gtest gtest_main)

add_test(AllTestsInFoo lib_tests)