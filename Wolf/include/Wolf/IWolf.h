#ifndef IWOLF_H
#define IWOLF_H

class IWolf
{
public:
  virtual ~IWolf() {}

  virtual int howl() const = 0;
};

#endif // IWOLF_H
