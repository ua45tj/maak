#include "CalculatorComplex.h"

CalculatorComplex::CalculatorComplex(int multiplier)
  : mMultiplier(multiplier)
{
}

int CalculatorComplex::calculate(int a, int b) const
{
  return (a * mMultiplier + b / mMultiplier);
}
