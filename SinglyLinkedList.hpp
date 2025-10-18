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
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
    
    // TODO: Implement the operations (copy from lecture slides)
    T Head() const {
        if (head == nullptr) {
            return 0;
        }

        return head->data;
    }
    
    T Tail() const {
        if (tail == nullptr) {
            return 0;
        }

        return tail->data;
    }
    
    T FindKth(int k) const {
        if (k < 0 || k >= size) {
            return 0;
        }

        Node* current = head;
        for (int i = 0; i < k; i++) {
            current = current->next;
        }

        return current->data;
    }
    
    void Add(const T& value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }

        size++;
    }
    
    void Insert(const T& value, int k) {
        if (k < 0 || k > size) {
            return;
        }

        Node* newNode = new Node(value);

        Node* current = head;

        if (k == 0) {
            newNode->next = head;
            head = newNode;
            if (tail == nullptr) {
                tail = newNode;
            }
        } else if (k == size) {
            tail->next = newNode;
            tail = newNode;
        } else {
            for (int i = 0; i < k - 1; i++) {
                current = current->next;
            }

            newNode->next = current->next;
            current->next = newNode;
        }

        size++;
    }
    
    void Remove(int k) {
        if (k < 0 || k >= size) {
            return;
        }

        Node* current = head;

        if (k == 0) {
            head = head->next;
            if (head == nullptr) {
                tail = nullptr;
            }

            delete current;
        } else {
            Node* prev = nullptr;
            for (int i = 0; i < k; i++) {
                prev = current;
                current = current->next;
            }

            prev->next = current->next;
            if (current == tail) {
                tail = prev;
            }

            delete current;
        }

        size--;
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
