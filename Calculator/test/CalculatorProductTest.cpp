#include "CalculatorFactory.h"

int main()
{
  CalculatorFactory calculatorFactory;
  ICalculator* calculator = calculatorFactory.createCalculator(1);

  int expected = 63;
  int actual = calculator->calculate(7, 9);

  delete calculator;

  bool ok = (expected == actual);

  return (ok ? 0 : 1);
}
