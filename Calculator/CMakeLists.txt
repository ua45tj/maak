cmake_minimum_required(VERSION 2.8)

add_library(Calculator
  src/CalculatorFactory.cpp
  src/CalculatorSum.cpp
  src/CalculatorProduct.cpp
  src/CalculatorDivision.cpp
  src/CalculatorComplex.cpp
)
# include/ICalculator.h
# include/CalculatorFactory.h
# src/CalculatorSum.h
# src/CalculatorProduct.h
# src/CalculatorDivision.h
# src/CalculatorComplex.h
target_include_directories(Calculator
  PUBLIC
    include
)

enable_testing()

add_executable(CalculatorSumTest test/CalculatorSumTest.cpp)
target_link_libraries(CalculatorSumTest Calculator)
add_test(CalculatorSumTest CalculatorSumTest)

add_executable(CalculatorProductTest test/CalculatorProductTest.cpp)
target_link_libraries(CalculatorProductTest Calculator)
add_test(CalculatorProductTest CalculatorProductTest)

add_executable(CalculatorDivisionTest test/CalculatorDivisionTest.cpp)
target_link_libraries(CalculatorDivisionTest Calculator)
add_test(CalculatorDivisionTest CalculatorDivisionTest)

add_executable(CalculatorComplexTest test/CalculatorComplexTest.cpp)
target_link_libraries(CalculatorComplexTest Calculator)
add_test(CalculatorComplexTest CalculatorComplexTest)
