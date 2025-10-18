# Queue Implementation with SinglyLinkedList

This project implements a Queue data structure using a SinglyLinkedList as the underlying storage mechanism.

## Project Structure

```
queue/
├── main.cpp              # Main program with test cases
├── Queue.hpp             # Header file with Queue class declarations and implementations
├── SinglyLinkedList.hpp  # Header file with SinglyLinkedList class declarations and implementations
├── CMakeLists.txt        # CMake build configuration
├── Makefile              # Make build configuration
└── README.md             # This file
```

## Files Description

- **main.cpp**: Contains the main function with test cases to demonstrate queue operations
- **Queue.hpp**: Header file containing the Queue class declarations and method implementations
- **SinglyLinkedList.hpp**: Header file containing the SinglyLinkedList class declarations and method implementations
- **CMakeLists.txt**: CMake configuration for building the project
- **Makefile**: Make configuration for building the project

## Queue Operations

The Queue class provides the following operations:
- `Enqueue(value)`: Adds an element to the rear of the queue
- `Dequeue()`: Removes and returns the front element
- `Peek()`: Returns the front element without removing it
- `IsEmpty()`: Checks if the queue is empty
- `Size()`: Returns the number of elements in the queue
- `Print()`: Displays the queue contents for debugging

## Compilation and Running

### Method 1: Using CMake (Recommended)

1. Create a build directory:
   ```bash
   mkdir build
   cd build
   ```

2. Generate build files:
   ```bash
   cmake ..
   ```

3. Build the project:
   ```bash
   cmake --build .
   ```

4. Run the executable:
   ```bash
   ./bin/queue
   ```

### Method 2: Using Make (Alternative)

1. Build the project:
   ```bash
   make
   ```

2. Run the executable:
   ```bash
   ./queue
   ```

3. Or build and run in one command:
   ```bash
   make run
   ```

#### Additional Make Targets

- `make clean`: Remove build artifacts
- `make help`: Show available targets

## Requirements

- C++17 compatible compiler (g++, clang++, or MSVC)
- CMake 3.10 or later (for CMake method)
- Make (for Make method)

## Expected Output

When you run the program, you should see output similar to:

```
Testing Queue using SinglyLinkedList...
Queue (front to rear): List: 10 -> 20 -> 30
Front element: 10
Dequeued: 10
Queue (front to rear): List: 20 -> 30
Size: 2
Is empty: No
Dequeued: 20
Dequeued: 30
Is empty: Yes
```

## Implementation Notes

- The Queue uses a SinglyLinkedList as its underlying data structure
- The SinglyLinkedList maintains both head and tail pointers for efficient operations
- All operations are implemented with proper error handling
- The implementation includes template support for different data types
