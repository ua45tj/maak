#ifndef CALCULATORFACTORY_H
#define CALCULATORFACTORY_H

#include "ICalculator.h"

class CalculatorFactory
{
public:
  CalculatorFactory();
  ~CalculatorFactory();

  ICalculator* createCalculator(int option) const;
};

#endif // CALCULATORFACTORY_H
