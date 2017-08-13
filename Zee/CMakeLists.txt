cmake_minimum_required(VERSION 2.8)

add_library(Zee src/Zee.cpp)
# include/IZee.h
target_include_directories(Zee
  PUBLIC
    include
)

enable_testing()
add_executable(ZeeTest test/ZeeTest.cpp)
target_link_libraries(ZeeTest Zee)
add_test(ZeeTest ZeeTest)
