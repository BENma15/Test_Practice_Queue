#include "Queue.hpp"

// Test function - you can modify this to test your implementation
int main() {
    Queue<int> queue;
    
    std::cout << "Testing Queue using SinglyLinkedList..." << std::endl;
    
    // Test Enqueue
    queue.Enqueue(10);
    queue.Enqueue(20);
    queue.Enqueue(30);
    queue.Print(); // Should print: Queue (front to rear): List: 10 -> 20 -> 30
    
    // Test Peek
    std::cout << "Front element: " << queue.Peek() << std::endl; // Should print: 10
    
    // Test Dequeue
    std::cout << "Dequeued: " << queue.Dequeue() << std::endl; // Should print: 10
    queue.Print(); // Should print: Queue (front to rear): List: 20 -> 30
    
    // Test Size
    std::cout << "Size: " << queue.Size() << std::endl; // Should print: 2
    
    // Test IsEmpty
    std::cout << "Is empty: " << (queue.IsEmpty() ? "Yes" : "No") << std::endl; // Should print: No
    
    // Dequeue remaining elements
    std::cout << "Dequeued: " << queue.Dequeue() << std::endl; // Should print: 20
    std::cout << "Dequeued: " << queue.Dequeue() << std::endl; // Should print: 30
    
    std::cout << "Is empty: " << (queue.IsEmpty() ? "Yes" : "No") << std::endl; // Should print: Yes
    
    return 0;
}
