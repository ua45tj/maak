#ifndef CALCULATORPRODUCT_H
#define CALCULATORPRODUCT_H

#include "ICalculator.h"

class CalculatorProduct
  : public ICalculator
{
public:
  virtual int calculate(int a, int b) const;
};

#endif // CALCULATORPRODUCT_H
