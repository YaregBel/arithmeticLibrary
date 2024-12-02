#include <iostream>
#include <string>

namespace summer {
  
  int firstNumb;
  int secondNumb;

  int sum(int firstNumb, int secondNumb)
  {
    return firstNumb + secondNumb;
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

  return 0;
}
