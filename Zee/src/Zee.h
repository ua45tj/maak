#ifndef ZEE_H
#define ZEE_H

#include "IZee.h"

class Zee
  : public IZee
{
public:
  Zee();
  virtual ~Zee();

  // IZee
  virtual int makeRequest(const std::string& query);
  virtual bool isResponseReady(int id) const;
  virtual std::string getResponse(int id) const;

private:
  int mIntValue;
  std::string mStringValue;
};

#endif // ZEE_H
