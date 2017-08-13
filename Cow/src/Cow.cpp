#include "Cow.h"

Cow::Cow()
  : mMilk(42)
{
}

int Cow::getMilk() const
{
  return mMilk;
}
