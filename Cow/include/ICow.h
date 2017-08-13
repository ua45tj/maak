#ifndef ICOW_H
#define ICOW_H

class ICow
{
public:
  virtual ~ICow() {}

  virtual int getMilk() const = 0;
};

#endif // ICOW_H
