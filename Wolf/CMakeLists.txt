cmake_minimum_required(VERSION 2.8)

add_library(Wolf src/Wolf/Wolf.cpp)
# include/Wolf/IWolf.h
# src/Wolf/Wolf.h
target_include_directories(Wolf
  PUBLIC
    include
    src
)

enable_testing()
add_executable(WolfTest test/Wolf/WolfTest.cpp)
target_link_libraries(WolfTest Wolf)
add_test(WolfTest WolfTest)
