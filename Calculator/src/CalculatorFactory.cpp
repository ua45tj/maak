#include "CalculatorFactory.h"
#include "CalculatorSum.h"
#include "CalculatorProduct.h"
#include "CalculatorDivision.h"
#include "CalculatorComplex.h"

CalculatorFactory::CalculatorFactory()
{
}

CalculatorFactory::~CalculatorFactory()
{
}

ICalculator* CalculatorFactory::createCalculator(int option) const
{
  ICalculator* calculator = 0;

  switch (option)
  {
  case 0:
    calculator = new CalculatorSum;
    break;
  case 1:
    calculator = new CalculatorProduct;
    break;
  case 2:
    calculator = new CalculatorDivision;
    break;
  default:
    calculator = new CalculatorComplex(option - 1);
    break;
  }

  return calculator;
}
