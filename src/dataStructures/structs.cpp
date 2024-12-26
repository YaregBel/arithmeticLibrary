#include <iostream>

template<typename T>
class List
{
public:
  List();
  ~List();
  
  void push_back(T data);
  int get_size(){return size;};

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
  else 
  {
    Node<T> *current = this->head;
    
    while(current->pNext != nullptr)
    {
      current = current->pNext;
      std::cout << current->data << std::endl;

    }
    current->pNext = new Node<T>(data);
  }
  size++;
}

template<typename T>
T& List<T>::operator[](const int index)
{
  if (index < 0)
  {
    throw std::out_of_range("Index cannot be negative");
  }

  int counter = 0;
  Node<T> *current = this->head;

  while (current != nullptr)
  {
    if (counter == index)
    {
      return current->data;
    }
    current = current->pNext;
    counter++;
  }

  throw std::out_of_range("Index out of range");
}

int main()
{
  List<int> lst;
  lst.push_back(1);
  lst.push_back(2);
  lst.push_back(3);
  lst.push_back(4);

  std::cout << "Количество элементов в списке: " << lst.get_size() << std::endl;
  std::cout << lst[1] << std::endl;

  return 0;
}
