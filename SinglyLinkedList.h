#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

template <typename T>
class SinglyLinkedList {
private:
    struct Node {
        T data;
        Node* next;
        Node(T value) : data(value), next(nullptr) {}
    };
    Node* head;

public:
    SinglyLinkedList() : head(nullptr) {}
    ~SinglyLinkedList();

    void add(T value);          // Добавление элемента в конец
    void insertAfterFirst(T E); // Вставка после первого вхождения E
    void print() const;         // Печать списка
};

#endif // SINGLY_LINKED_LIST_H
