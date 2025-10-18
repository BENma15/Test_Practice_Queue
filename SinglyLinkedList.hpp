#ifndef SINGLYLINKEDLIST_HPP
#define SINGLYLINKEDLIST_HPP

#include <iostream>
#include <stdexcept>

template<typename T>
class SinglyLinkedList {
private:
    struct Node {
        T data;
        Node* next;
        
        Node(const T& value) : data(value), next(nullptr) {}
    };
    
    Node* head;
    Node* tail;
    int size;
    
public:
    // Constructor
    SinglyLinkedList() : head(nullptr), tail(nullptr), size(0) {}
    
    // Destructor
    ~SinglyLinkedList() {
        // TODO: Delete all nodes to prevent memory leaks
    }
    
    // TODO: Implement the operations (copy from lecture slides)
    T Head() const {
        // TODO: Return the first element, throw exception if empty
    }
    
    T Tail() const {
        // TODO: Return the last element, throw exception if empty
    }
    
    T FindKth(int k) const {
        // TODO: Return the k-th element, throw exception if out of range
    }
    
    void Add(const T& value) {
        // TODO: Add element to the end of the list
    }
    
    void Insert(const T& value, int k) {
        // TODO: Insert element at position k, throw exception if out of range
    }
    
    void Remove(int k) {
        // TODO: Remove element at position k, throw exception if out of range
    }
    
    // Utility functions
    bool IsEmpty() const {
        return size == 0;
    }
    
    int Size() const {
        return size;
    }
    
    void Print() const {
        Node* current = head;
        std::cout << "List: ";
        while (current != nullptr) {
            std::cout << current->data;
            if (current->next != nullptr) {
                std::cout << " -> ";
            }
            current = current->next;
        }
        std::cout << std::endl;
    }
};

#endif // SINGLYLINKEDLIST_HPP
