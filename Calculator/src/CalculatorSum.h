#ifndef CALCULATORSUM_H
#define CALCULATORSUM_H

#include "ICalculator.h"

class CalculatorSum
  : public ICalculator
{
public:
  virtual int calculate(int a, int b) const;
};

#endif // CALCULATORSUM_H
