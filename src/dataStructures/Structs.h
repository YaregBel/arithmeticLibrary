#pragma once
//#ifndef STRUCTS_H
//#define STRUCTS_H

namespace structNameSpace
{
    template<typename T>
    class List
    {
    public:
        List();
        ~List();

        void push_back(T data);
        void push_forward(T data);

        int get_size(){return size;};
        bool empty();

        T& get_tail();

        T& operator[](const int index);

    private:

        template<typename Z>
        class Node
        {
        public:
            Node *pNext;
            Z data;

            // T data = T() благодаря такой конструкции будет вызываться
            // конструктор типа T, либо же ему будет задаваться значение по умолчанию
            Node(Z data=Z(), Node *pNext = nullptr)
            {
                this->data = data;
                this->pNext = pNext;
            };
        };


        // Так как все элементы динамического списка будут храниться
        // в динамической памяти, head и tail будут являться указателями.
        Node<T> *head;
        Node<T> *tail;
        // Используется, чтобы хранить количество элементов в списке
        // Для этого не придется каждый раз перебирать все элементы,
        // чтобы определить длину списка.
        int size;
    };

    void sing();
}

// Подключаем реализацию шаблонов
#include "Structs.tpp"

//#endif // STRUCTS_H
