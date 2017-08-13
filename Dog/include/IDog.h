#ifndef IDOG_H
#define IDOG_H

#include <string>

class IDog
{
public:
  virtual ~IDog() {}

  virtual std::string bark() const = 0;
};

#endif // IDOG_H
