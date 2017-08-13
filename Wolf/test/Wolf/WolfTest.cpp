#include "Wolf/Wolf.h"

int main()
{
  Wolf wolf;

  int expected = 14;
  int actual = wolf.howl();

  bool ok = (expected == actual);

  return (ok ? 0 : 1);
}
