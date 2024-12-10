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
  auto sum_nums(Args... args) -> decltype((args + ...))
  {
    // Унарная правоассоциативная свертка 
    return (args + ...);
  }

  //template<typename T>
  auto* sumToArray(auto arr[], int n, auto numb)
  {
    std::cout << "Массив после добавления " << numb << " : ";
    for (int i = 0; i < n; i++)
    {
      arr[i] += numb;
      std::cout << arr[i] << " ";
    } 
    
    std::cout << std::endl;

    return arr;
  }
}


namespace printer {

  void print(auto number)
  {
    std::cout << number << std::endl;
  }

  //template<typename... Args>
  //void printSet(Args... args)
  //{
  //  std::cout << ... << args << std::endl;
  //}
}

using namespace printer;


int main (int argc, char *argv[]) {

  std::cout << summer::sum(15, 20) << std::endl;
  printer::print(summer::sum(4, 9));
  print(26);

   
  print(summer::sum_nums(1, 2, 3, 4, 5, 6, 7, 8, 9));
  print(summer::sum_nums(0.3, 0.21, 0.17, 0.4));
  
  int n = 3;
  int arr[3]{1, 2, 3};
  int numb = 5;

  std::cout << "Массив до изменения: ";
  for (int i = 0; i < n; i++)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
 
  summer::sumToArray(arr, n, numb);
  


  return 0;
}
