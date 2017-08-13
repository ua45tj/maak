#include "Dog.h"

int main()
{
  Dog dog;

  std::string expected = "woof";
  std::string actual = dog.bark();

  bool ok = (expected == actual);

  return (ok ? 0 : 1);
}
