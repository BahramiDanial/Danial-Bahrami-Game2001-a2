#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <iostream>

template <typename T>
class LinkedList {
protected:
    Node<T>* head; // Pointer to the first node in the list

public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        while (head) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
    }

    Node<T>* getHead() const { return head; }

    void printList() const {
        Node<T>* temp = head;
        while (temp) {
            std::cout << "[Priority: " << temp->priority << ", Data: " << temp->data << "] -> ";
            temp = temp->next;
        }
        std::cout << "nullptr\n";
    }
};

#endif // LINKEDLIST_H
