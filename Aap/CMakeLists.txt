cmake_minimum_required(VERSION 2.8)

add_executable(Aap
  src/AapMain.cpp
)

target_link_libraries(Aap
  Cow
  Dog
  Wolf
  Zee
  Calculator
)
