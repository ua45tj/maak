cmake_minimum_required(VERSION 2.8)

add_library(Cow src/Cow.cpp)
# include/ICow.h
# include/Cow.h
target_include_directories(Cow
  PUBLIC
    include
)

enable_testing()
add_executable(CowTest test/CowTest.cpp)
target_link_libraries(CowTest Cow)
add_test(CowTest CowTest)
