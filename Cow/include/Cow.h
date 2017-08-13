#ifndef COW_H
#define COW_H

#include "ICow.h"

class Cow
  : public ICow
{
public:
  Cow();

  // ICow
  virtual int getMilk() const;

private:
  int mMilk;
};

#endif // COW_H
