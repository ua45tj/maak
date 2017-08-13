#include "CalculatorFactory.h"

int main()
{
  CalculatorFactory calculatorFactory;
  ICalculator* calculator = calculatorFactory.createCalculator(0);

  int expected = 9;
  int actual = calculator->calculate(4, 5);

  delete calculator;

  bool ok = (expected == actual);

  return (ok ? 0 : 1);
}
