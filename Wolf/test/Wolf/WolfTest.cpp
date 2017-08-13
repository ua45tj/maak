#include "Wolf/Wolf.h"

int main()
{
  Wolf wolf;

  int expected = 13;
  int actual = wolf.howl();

  bool ok = (expected == actual);

  return (ok ? 0 : 1);
}
