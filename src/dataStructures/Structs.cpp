#include <iostream>
#include "Structs.h"

namespace structNameSpace
{
    // Реализация шаблонного класса происходит в заголовке,
    // так как компилятору уже на моменте компиляции необходимо видеть эту реализацию
    // Реализация расписана в файле Structs.tpp и подключена внизу заголовочного класса
    // Structs.h с помощью <#include "Structs.tpp">
    void sing(){
        std::cout << "Файл с реализацией односвязного списка подключен!" << std::endl;
    }
}


// =============================== \<\
// ============example============ |=|
// =============================== />/


// int main()
// {
//   structNameSpace::List<int> lst;
//   lst.push_back(1);
//   lst.push_back(2);
//   lst.push_back(3);
//   lst.push_back(4);

//   std::cout << "Количество элементов в списке: " << lst.get_size() << std::endl;
//   std::cout << lst[1] << std::endl;

//   std::cout << lst.get_tail() << std::endl;

//   if (lst.empty() == false) {
//     std::cout << "А список то не пустой" << std::endl;
//   }
//   else {
//     std::cout << "Списку одиноко :_(" << std::endl;
//   }

//   return 0;
// }
