#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>
#include <stdexcept>
#include "SinglyLinkedList.hpp"

// Queue class using SinglyLinkedList
template<typename T>
class Queue {
private:
    SinglyLinkedList<T> list;
    
public:
    // TODO: Implement constructor
    Queue() {}
    
    // TODO: Implement destructor
    ~Queue() {}
    
    // TODO: Implement Enqueue(const T& value) operation
    void Enqueue(const T& value) {
        // TODO: Add element to the rear of the queue
        // Hint: Use the list's Add method
    }
    
    // TODO: Implement Dequeue() operation
    T Dequeue() {
        // TODO: Remove and return the front element
        // Hint: Use the list's Head method to get the value, then Remove(0)
    }
    
    // TODO: Implement Peek() operation
    T Peek() const {
        // TODO: Return the front element without removing it
        // Hint: Use the list's Head method
    }
    
    // Utility functions
    bool IsEmpty() const {
        return list.IsEmpty();
    }
    
    int Size() const {
        return list.Size();
    }
    
    // Print function for debugging
    void Print() const {
        std::cout << "Queue (front to rear): ";
        list.Print();
    }
};

#endif // QUEUE_HPP
