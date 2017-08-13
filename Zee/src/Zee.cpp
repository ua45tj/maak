#include "Zee.h"
#include <iostream>

IZee* IZee::createZee()
{
  return new Zee;
}

Zee::Zee()
  : mIntValue(33)
  , mStringValue("this-is-some-string-value")
{
  std::cout << "Zee::Zee\n";
}

Zee::~Zee()
{
  std::cout << "Zee::~Zee\n";
}

int Zee::makeRequest(const std::string& query)
{
  std::cout << "Zee::makeRequest " << query << "\n";
  return 0;
}

bool Zee::isResponseReady(int id) const
{
  std::cout << "Zee::isResponseReady " << id << "\n";
  return true;
}

std::string Zee::getResponse(int id) const
{
  std::cout << "Zee::getResponse " << id << " :: " << mIntValue << "\n";
  return "[this is response]";
}
