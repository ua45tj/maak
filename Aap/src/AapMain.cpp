#include "Cow.h"
#include "Dog.h"
#include "Wolf/Wolf.h"
#include "IZee.h"
#include "CalculatorFactory.h"
#include <iostream>

int main()
{
  {
    Cow cow;
    std::cout << "The Cow gives " << cow.getMilk() << "\n";
  }

  {
    Dog dog;
    std::cout << "The Dog says " << dog.bark() << "\n";
  }

  {
    Wolf wolf;
    std::cout << "The Wolf does " << wolf.howl() << "\n";
  }

  {
    std::cout << "Starting Zee library test\n";
    IZee* zee = IZee::createZee();
    int id = zee->makeRequest("this is my request");

    if (zee->isResponseReady(id))
    {
      std::string response = zee->getResponse(id);
      std::cout << "Recieved response from Zee library: " << response << "\n";
    }
    std::cout << "Deleting Zee\n";
    delete zee;
  }

  {
    std::cout << "Starting Calculator library test\n";
    CalculatorFactory calculatorFactory;
    ICalculator* sum = calculatorFactory.createCalculator(0);
    ICalculator* product = calculatorFactory.createCalculator(1);
    ICalculator* division = calculatorFactory.createCalculator(2);
    ICalculator* complex3 = calculatorFactory.createCalculator(3);
    ICalculator* complex5 = calculatorFactory.createCalculator(5);

    std::cout << "7 9 sum = " << sum->calculate(7, 9) << "\n";
    std::cout << "7 9 product = " << product->calculate(7, 9) << "\n";
    std::cout << "81 3 division = " << division->calculate(81, 3) << "\n";
    std::cout << "13 45 complex3 = " << complex3->calculate(13, 45) << "\n";
    std::cout << "13 45 complex5 = " << complex5->calculate(13, 45) << "\n";

    std::cout << "Deleting Calculators\n";
    delete complex5;
    delete complex3;
    delete division;
    delete product;
    delete sum;
  }

  return 0;
}
