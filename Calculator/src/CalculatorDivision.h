#ifndef CALCULATORDIVISION_H
#define CALCULATORDIVISION_H

#include "ICalculator.h"

class CalculatorDivision
  : public ICalculator
{
public:
  virtual int calculate(int a, int b) const;
};

#endif // CALCULATORDIVISION_H
