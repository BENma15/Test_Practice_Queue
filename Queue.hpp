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
        list.Add(value);
    }
    
    // TODO: Implement Dequeue() operation
    T Dequeue() {
        if (list.IsEmpty()) {
            return 0;
        }
        
        T value = list.Head();
        list.Remove(0);
        return value;
    }
    
    // TODO: Implement Peek() operation
    T Peek() const {
        return list.Head();
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
