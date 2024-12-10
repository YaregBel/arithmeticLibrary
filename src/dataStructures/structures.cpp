#include <iostream>
#include <initializer_list>
using namespace std;

template <typename T>
class Node
{
public:
  T data;
  Node<T> *next;
  // : next(nullptr) - это пример инициализации членов класса. 
  // Так как конструктор в обоих случаях у нас пустой, можно сделать вывод, 
  // что в его теле не происходит никаких действий, 
  // кроме как инициализации членов класса.
  Node() : next(nullptr) {};
  Node(const T &item, Node<T> *ptr = nullptr) : data(item), next(ptr) {};
};

template<typename T>
class forward_list
{
private:
  Node<T> *head, *tail;

public:
  class iterator;
  forward_list();
  ~forward_list();
  forward_list(std::initializer_list<T> ls);
  void push_front(const T &val);
  void pop_front();
  void traverse();

  // Метод для переноса итератора в начало,
  // ВОЗВРАЩАЕТ итератор
  iterator begin() const{
    return iterator(head);
  }
  
  // Метод для переноса итератора в конец,
  // ВОЗВРАЩАЕТ итератор
  iterator end() const{
    return iterator(tail);
  }

  //implementation of iterator for forward_list
  class iterator(){ friend class forward_list;
  private:
    Node<T> *node_ptr;
    iterator(Node<T> *new_ptr) : node_ptr(new_ptr) {};

  public:
    iterator() : node_ptr(nullptr) {};
    
    // Перегружаем итератор неравенства
    bool operator!=(const iterator &iter) const{
      return node_ptr != iter.node_ptr;
    }
    
    // Перегружаем оператор разыменования
    // возвращает -- 
    // return T&
    T& operator*() const{
      return node_ptr->next->data;
    }

    // Перевод оператор пре-инкремента
    // возвращает итератор на следующий элемент
    // return iterator 
    iterator operator++(){
      node_ptr = node_ptr->next;
      return *this;
    }
    
    // Перегрузка оператора пост-инкремента
    // возвращает
    iterator operator++(int){
      iterator iter = *this;
      ++*this;
      return iter;
    }

    
  };
};

template <typename T>
forward_list<T>::forward_list(std::initializer_list<T> ls){
}

// Деструктор
template <typename T>
forward_list<T>::~forward_list() {
  while(head->next != nullptr){
    Node<T> *temp = head;
    head = head->next;
    delete temp;
  }
  delete head;
}

// Добавить элемент в начало списка
template <typename T>
forward_list<T>::push_front(const T &val){
  Node<T> *new_node = new Node<T>;
  new_node->data = val;
  new_node->next = head;
  head = new_node;
}

// Удалить элемента из начала списка
template <typename T>
forward_list<T>::pop_front(const T &val){
  Node<T> *temp_node = new Node<T>;
  temp_node = head;
  head = head->next;
  delete temp_node;
}

template <typename T>
void forward_list<T>::traverse() {
    cout << "traverse called" << endl;
    Node<T> *itr_node = head;

    while(itr_node != nullptr){
        cout << itr_node->data << "  ";
        itr_node = itr_node->next;
    }
    cout << endl;
}

int main() {
}

