#include "Cow.h"

int main()
{
  Cow cow;

  int expected = 42;
  int actual = cow.getMilk();

  bool ok = (expected == actual);

  return (ok ? 0 : 1);
}
