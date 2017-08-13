#ifndef CALCULATORCOMPLEX_H
#define CALCULATORCOMPLEX_H

#include "ICalculator.h"

class CalculatorComplex
  : public ICalculator
{
public:
  explicit CalculatorComplex(int multiplier);

  virtual int calculate(int a, int b) const;

private:
  int mMultiplier;
};

#endif // CALCULATORCOMPLEX_H
