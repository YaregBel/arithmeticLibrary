// Structs.tpp

namespace structNameSpace {
template<typename T>
List<T>::List() {
    head = nullptr;
    size = 0;
}

template<typename T>
List<T>::~List() {
    std::cout << "Деструктор списка сработал" << std::endl;
}

template<typename T>
void List<T>::push_back(T data) {
    if (head == nullptr) {
        head = new Node<T>(data);
        tail = head;
    } else {
        Node<T> *current = this->head;
        while (current->pNext != nullptr) {
            current = current->pNext;
        }
        current->pNext = new Node<T>(data);
        tail = current->pNext;
    }
    size++;
}

template<typename T>
void List<T>::push_forward(T data) {
    if (head == nullptr) {
        head = new Node<T>(data);
        tail = head;
    } else {
        Node<T> *current = new Node<T>(data, head);
        head = current;
    }
    size++;
}

template<typename T>
T& List<T>::operator[](const int index) {
    if (index < 0) {
        throw std::out_of_range("Index cannot be negative");
    }

    int counter = 0;
    Node<T> *current = this->head;

    while (current != nullptr) {
        if (counter == index) {
            return current->data;
        }
        current = current->pNext;
        counter++;
    }

    throw std::out_of_range("Index out of range");
}

template<typename T>
T& List<T>::get_tail() {
    return this->tail->data;
}

template<typename T>
bool List<T>::empty() {
    return this->size == 0;
}
}
