#include <iostream>

template<typename T>
class Node;

template<typename T>
class List
{
public:
  List();
  ~List();
  
  void push_back(T data);

private:

  // Так как все элементы динамического списка будут храниться
  // в динамической памяти, head и tail будут являться указателями.
  Node<T> *head;
  Node<T> *tail;
  // Используется, чтобы хранить количество элементов в списке
  // Для этого не придется каждый раз перебирать все элементы,
  // чтобы определить длину списка.
  int size;
};

template<typename T>
class Node
{
public:
  Node *pNext;
  T data;

  // T data = T() благодаря такой конструкции будет вызываться
  // конструктор типа T, либо же ему будет задаваться значение по умолчанию
  Node(T data=T(), Node *pNext = nullptr)
  {
    this->data = data;
    this->pNext = pNext;
  };
};


template<typename T>
List<T>::List()
{
  head = nullptr;
  size = 0;
}

template<typename T>
List<T>::~List()
{
  std::cout << "Деструктор списка сработал" << std::endl;
}

template<typename T>
void List<T>::push_back(T data)
{
  if (head == nullptr)
  {
    head = new Node<T>(data);
  }
  else {
    Node<T> *current = this->head;
    
    while(current->pNext != nullptr)
    {
      current = current->pNext;
      std::cout << current->data << std::endl;

    }
    current->pNext = new Node<T>(data);

  }
}

int main()
{
  List<int> lst;
  lst.push_back(1);
  lst.push_back(2);
  lst.push_back(3);

  return 0;
}
