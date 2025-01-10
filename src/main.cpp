#include <iostream>
#include <string>

#include "dataStructures/Structs.h"
#include "Tests.h"

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

    std::cout << "\n\n";
    structNameSpace::sing();

    structNameSpace::List<int> lst;
    lst.push_back(1);

    std::cout << "Размер списка: " << lst.get_size() << std::endl;
    std::cout << "Первый элемент списка: " << lst[0] << std::endl;

    test_list();


    return 0;
}
