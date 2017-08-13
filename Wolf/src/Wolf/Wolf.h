#ifndef WOLF_H
#define WOLF_H

#include "Wolf/IWolf.h"

class Wolf
  : public IWolf
{
public:
  Wolf();

  // IWolf
  virtual int howl() const;

private:
  int mTimes;
};

#endif // WOLF_H
