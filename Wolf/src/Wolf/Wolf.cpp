#include "Wolf/Wolf.h"

namespace
{
  int add1(int x)
  {
    return (x + 1);
  }
}

Wolf::Wolf()
  : mTimes(13)
{
}

int Wolf::howl() const
{
  return add1(mTimes);
}
