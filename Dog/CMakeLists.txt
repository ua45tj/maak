cmake_minimum_required(VERSION 2.8)

add_library(Dog src/Dog.cpp)
# include/IDog.h
# src/Dog.h
target_include_directories(Dog
  PUBLIC
    include
    src
)

enable_testing()
add_executable(DogTest test/DogTest.cpp)
target_link_libraries(DogTest Dog)
add_test(DogTest DogTest)
