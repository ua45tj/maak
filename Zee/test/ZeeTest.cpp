#include "IZee.h"

int main()
{
  IZee* zee = IZee::createZee();

  int expected = 0;
  int actual = zee->makeRequest("this is my request");

  delete zee;

  bool ok = (expected == actual);

  return (ok ? 0 : 1);
}
