#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include "LinkedList.h"

template <typename T>
class PriorityQueue : public LinkedList<T> {
public:
    void push(int priority, T data) {
        Node<T>* newNode = new Node<T>(priority, data);

        // If the list is empty or the new node has higher priority than the head
        if (!this->head || this->head->priority > priority) {
            newNode->next = this->head;
            this->head = newNode;
            return;
        }

        // Traverse the list to find the correct insertion point
        Node<T>* temp = this->head;
        while (temp->next && temp->next->priority <= priority) {
            temp = temp->next;
        }

        // Insert the new node
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void pop() {
        if (!this->head) {
            std::cout << "Priority queue is empty. Nothing to pop.\n";
            return;
        }

        Node<T>* temp = this->head;
        this->head = this->head->next;
        delete temp;
    }

    Node<T>* front() const {
        return this->head;
    }
};

#endif // PRIORITYQUEUE_H
