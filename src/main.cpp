#include <iostream>
#include <string>

namespace summer {
  
  int firstNumb;
  int secondNumb;

  int sum(int firstNumb, int secondNumb)
  {
    return firstNumb + secondNumb;
  }

  // Шаблонная функция, принимающая переменное число параметров
  // и вычисляющая их сумму.
  template<typename... Args>
  int sum_nums(Args... args)
  {
    // Унарная правоассоциативная свертка 
    return (args + ...);
  }
}


namespace printer {

  void print(int number)
  {
    std::cout << number << std::endl;
  }
}

using namespace printer;


int main (int argc, char *argv[]) {

  std::cout << summer::sum(15, 20) << std::endl;
  printer::print(summer::sum(4, 9));
  print(26);

   
  print(summer::sum_nums(1, 2, 3, 4, 5, 6, 7, 8, 9));


  return 0;
}
