#pragma once

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

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
        Node *pPrev;
        Z data;

        // T data = T() благодаря такой конструкции будет вызываться
        // конструктор типа T, либо же ему будет задаваться значение по умолчанию
        Node(Z data=Z(), Node *pNext = nullptr, Node *pPrev = nullptr)
        {
            this->data = data;
            this->pNext = pNext;
            this->pPrev = pPrev;
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

#include "linked_list.tpp"

#endif // LINKED_LIST_H
