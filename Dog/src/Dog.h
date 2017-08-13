#ifndef DOG_H
#define DOG_H

#include "IDog.h"

class Dog
  : public IDog
{
public:
  Dog();

  virtual std::string bark() const;
};

#endif // DOG_H
