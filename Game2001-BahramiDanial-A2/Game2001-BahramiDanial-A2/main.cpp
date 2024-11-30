#include "main.h"
#include <iostream>
#include "PriorityQueue.h"

int main() {
    PriorityQueue<std::string> pq;

    // Test: Adding elements to the priority queue
    pq.push(3, "Task C");
    pq.push(1, "Task A");
    pq.push(4, "Task D");
    pq.push(2, "Task B");

    std::cout << "Priority Queue after pushes:\n";
    pq.printList();

    // Test: Accessing the front element
    Node<std::string>* front = pq.front();
    if (front) {
        std::cout << "Front of the queue: [Priority: " << front->priority
            << ", Data: " << front->data << "]\n";
    }

    // Test: Removing elements from the priority queue
    std::cout << "\nPopping elements:\n";
    while (pq.front()) {
        Node<std::string>* frontNode = pq.front();
        std::cout << "Removing [Priority: " << frontNode->priority
            << ", Data: " << frontNode->data << "]\n";
        pq.pop();
        pq.printList();
    }

    return 0;
}
