#ifndef ICALCULATOR_H
#define ICALCULATOR_H

class ICalculator
{
public:
  virtual ~ICalculator() {}

  virtual int calculate(int a, int b) const = 0;
};

#endif // ICALCULATOR_H
