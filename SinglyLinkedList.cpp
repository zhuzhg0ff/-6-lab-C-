#include "SinglyLinkedList.h"
#include <iostream>

template <typename T>
SinglyLinkedList<T>::~SinglyLinkedList() {
    Node* current = head;
    while (current) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

template <typename T>
void SinglyLinkedList<T>::add(T value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

template <typename T>
void SinglyLinkedList<T>::insertAfterFirst(T E) {
    Node* temp = head;
    while (temp) {
        if (temp->data == E) {
            Node* newNode = new Node(E);
            newNode->next = temp->next;
            temp->next = newNode;
            return;
        }
        temp = temp->next;
    }
}

template <typename T>
void SinglyLinkedList<T>::print() const {
    Node* temp = head;
    while (temp) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

// Не забудьте включить реализацию шаблона!
template class SinglyLinkedList<int>;    // Для int
template class SinglyLinkedList<double>; // Для double
