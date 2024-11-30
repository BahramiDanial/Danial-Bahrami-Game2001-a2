#ifndef NODE_H
#define NODE_H

template <typename T>
class Node {
public:
    int priority;      // Priority of the node
    T data;            // Data stored in the node
    Node* next;        // Pointer to the next node

    Node(int priority, T data) : priority(priority), data(data), next(nullptr) {}
};

#endif // NODE_H
