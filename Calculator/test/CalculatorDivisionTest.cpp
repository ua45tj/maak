#include "CalculatorFactory.h"

int main()
{
  CalculatorFactory calculatorFactory;
  ICalculator* calculator = calculatorFactory.createCalculator(2);

  int expected = 6;
  int actual = calculator->calculate(27, 4);

  delete calculator;

  bool ok = (expected == actual);

  return (ok ? 0 : 1);
}
