#include "Wolf/Wolf.h"

Wolf::Wolf()
  : mTimes(13)
{
}

int Wolf::howl() const
{
  return mTimes;
}
