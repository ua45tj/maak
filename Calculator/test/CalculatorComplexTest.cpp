#include "CalculatorFactory.h"

int main()
{
  CalculatorFactory calculatorFactory;
  ICalculator* calculator = calculatorFactory.createCalculator(3);

  int expected = 20;
  int actual = calculator->calculate(7, 13);

  delete calculator;

  bool ok = (expected == actual);

  return (ok ? 0 : 1);
}
