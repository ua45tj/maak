#ifndef IZEE_H
#define IZEE_H

#include <string>

class IZee
{
public:
  static IZee* createZee();
  virtual ~IZee() {}

  virtual int makeRequest(const std::string& query) = 0;
  virtual bool isResponseReady(int id) const = 0;
  virtual std::string getResponse(int id) const = 0;
};

#endif // IZEE_H
