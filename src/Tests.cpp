// test_List.cpp
#include <iostream>
#include <cassert>

#include "Tests.h"
#include "dataStructures/Structs.h"

// Метод для тестирования класса List
void test_list() {
    using namespace structNameSpace;

    // Создаем список
    List<int> lst;

    // Проверяем, что список изначально пуст
    assert(lst.empty() == true);
    assert(lst.get_size() == 0);

    // Тестируем push_back
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);

    assert(lst.get_size() == 3);
    assert(lst.empty() == false);
    assert(lst[0] == 10);
    assert(lst[1] == 20);
    assert(lst[2] == 30);
    assert(lst.get_tail() == 30);

    std::cout << "Тесты push_back пройдены!" << std::endl;

    // Тестируем push_forward
    lst.push_forward(5);
    assert(lst[0] == 5);
    assert(lst.get_size() == 4);

    std::cout << "Тесты push_forward пройдены!" << std::endl;

    // Тестируем operator[]
    try {
        lst[10]; // Это должно выбросить исключение
        assert(false); // Если мы сюда попали, значит ошибка
    } catch (const std::out_of_range& e) {
        std::cout << "Исключение operator[] корректно выброшено: " << e.what() << std::endl;
    }

    // Тестируем get_tail
    assert(lst.get_tail() == 30);
    std::cout << "Тесты get_tail пройдены!" << std::endl;

    // Тестируем empty
    List<int> emptyList;
    assert(emptyList.empty() == true);
    emptyList.push_back(1);
    assert(emptyList.empty() == false);

    std::cout << "Тесты empty пройдены!" << std::endl;

    std::cout << "Все тесты успешно пройдены!" << std::endl;
}
