# Data Structures Implementation in C

[![Language](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Academic](https://img.shields.io/badge/Academic-IT%20Semester%203-green.svg)](https://github.com/HariMalam/Data-Structure)
[![License](https://img.shields.io/badge/License-Educational-yellow.svg)](https://github.com/HariMalam/Data-Structure)

A comprehensive collection of fundamental data structure implementations in C programming language. This repository contains both individual programs for each data structure operation and a master program that provides a unified menu-driven interface for all implementations.

## 👨‍💻 Author Information

- **Developer**: Malam Hari (@HariMalam)
- **Student ID**: 210160116051
- **Course**: Information Technology - Semester 3
- **📧 Email**: malamharid@gmail.com
- **📱 Phone**: +91 7284080686

## 📚 Repository Overview

This repository is designed as an educational resource for understanding and implementing fundamental data structures. It provides:

- **Individual Programs**: Separate C files for each operation of every data structure
- **Master Program**: A unified menu-driven interface to access all data structures
- **Comprehensive Coverage**: Complete implementation of linear data structures
- **Educational Focus**: Well-commented code suitable for learning and academic purposes

## 🗂️ Repository Structure

```
Data-Structure/
├── Master Program/
│   ├── Data_Structures.c          # Main comprehensive program
│   ├── master_linked_list.c       # Complete linked list implementation  
│   └── Index.txt                  # Function index and documentation
│
├── 01 Linear Data Structure/
│   ├── 01 Array/
│   │   ├── Array.c                # Main array program
│   │   ├── 01_Traversal.c         # Array traversal
│   │   ├── 02_Insersion.c         # Array insertion  
│   │   ├── 03_Deletion.c          # Array deletion
│   │   ├── 04_Linear_Search.c     # Linear search algorithm
│   │   ├── 05_Binary_Search.c     # Binary search algorithm
│   │   └── 06_Sorting_Array.c     # Array sorting
│   │
│   ├── 02 Stack/
│   │   ├── Stack.c                # Main stack program
│   │   ├── 01_Push.c              # Push operation
│   │   ├── 02_Pop.c               # Pop operation  
│   │   ├── 03_Peep.c              # Peep operation
│   │   └── 04_Peek.c              # Peek operation
│   │
│   ├── 03 Queue/
│   │   ├── Queue.c                # Main queue program
│   │   ├── 01 Simple Queue/       # Standard FIFO queue
│   │   ├── 02 Circular Queue/     # Circular queue implementation
│   │   └── 03 Doubly Ended Queue/ # Deque implementation
│   │
│   └── 04 Linked List/
│       ├── 01 Singly Linked List/ # Single linked list
│       ├── 02 Circular Linked List/ # Circular linked list  
│       ├── 03 Doubly Linked List/ # Double linked list
│       └── Basic/                 # Basic linked list operations
│
└── README.md                      # This documentation file
```

## 🔧 Data Structures Implemented

### 1. 📊 Arrays
Complete array operations with dynamic size allocation:
- **Traversal**: Display all array elements
- **Insertion**: Add elements at specific positions
- **Deletion**: Remove elements from specific positions
- **Linear Search**: Sequential search algorithm
- **Binary Search**: Efficient search for sorted arrays
- **Sorting**: Bubble sort implementation

### 2. 📚 Stacks (LIFO - Last In First Out)
Stack implementation with essential operations:
- **Push**: Add element to top of stack
- **Pop**: Remove element from top of stack
- **Peep**: View element at specific position
- **Peek**: View top element without removing
- **Overflow/Underflow**: Proper error handling

### 3. 🚶‍♂️ Queues (FIFO - First In First Out)
Three types of queue implementations:

#### Simple Queue
- **Enqueue**: Add element to rear
- **Dequeue**: Remove element from front
- **Search**: Find element in queue

#### Circular Queue  
- **Circular Enqueue**: Efficient space utilization
- **Circular Dequeue**: Circular buffer implementation
- **Search**: Element searching in circular structure

#### Doubly Ended Queue (Deque)
- **Insert Front**: Add element at front
- **Delete Rear**: Remove element from rear
- **Bidirectional Operations**: Insert/delete from both ends

### 4. 🔗 Linked Lists
Dynamic data structure implementations:

#### Singly Linked List
- **Insert**: First, Last, Between positions
- **Delete**: First, Last, Between positions
- **Traversal**: Display all nodes

#### Circular Linked List
- **Circular Insert**: First, Last, Between
- **Circular Delete**: First, Last, Between
- **Circular Traversal**: Navigate circular structure

#### Doubly Linked List
- **Bidirectional Insert**: First, Last, Between
- **Bidirectional Delete**: First, Last, Between  
- **Forward/Backward Traversal**: Navigate both directions

## 🚀 Getting Started

### Prerequisites
- GCC Compiler (or any C compiler)
- Terminal/Command Prompt
- Basic knowledge of C programming

### Compilation Instructions

#### Option 1: Compile Master Program (Recommended)
```bash
# Navigate to Master Program directory
cd "Master Program"

# Compile the comprehensive program
gcc -o data_structures Data_Structures.c

# Run the program
./data_structures
```

#### Option 2: Compile Individual Programs
```bash
# For Array operations
cd "01 Linear Data Structure/01 Array"
gcc -o array Array.c
./array

# For Stack operations  
cd "../02 Stack"
gcc -o stack Stack.c
./stack

# For Queue operations
cd "../03 Queue"  
gcc -o queue Queue.c
./queue

# For Linked List operations
cd "../04 Linked List/01 Singly Linked List"
gcc -o singly Singly_Linked_List.c
./singly
```

#### Option 3: Compile Specific Operations
```bash
# Compile individual operation files
cd "01 Linear Data Structure/01 Array"
gcc -o traversal 01_Traversal.c
./traversal
```

## 💡 Usage Examples

### Running the Master Program
1. Compile and run `Data_Structures.c`
2. Choose from the main menu:
   - Linear Data Structures
   - Non-Linear Data Structures  
3. Select specific data structure (Array, Stack, Queue, Linked List)
4. Choose operation to perform
5. Follow on-screen prompts for input

### Sample Menu Flow
```
+---------------------------------------------+
|        Data Structure Master Program        |
|---------------------------------------------|
|            Developed By Malam Hari          |
+---------------------------------------------+

----------------- Main Menu -------------------
(1) Linear Data Structure
(2) Non Linear Data Structure
(*) Exit

Enter Your Choice: 1

------------ Linear Data Structure ------------
(1) Array
(2) Stack  
(3) Queue
(4) Link List

Enter Your Choice: 1

--------------------- Array --------------------
(1) Traversal
(2) Insertion
(3) Deletion
(4) Linear Search
(5) Binary Search
(6) Sort Array
```

## 🎯 Educational Objectives

This repository serves as a learning resource for:
- **Data Structure Concepts**: Understanding fundamental data structures
- **Algorithm Implementation**: Practical coding of algorithms
- **C Programming**: Advanced C programming techniques
- **Menu-Driven Programming**: Interactive console applications
- **Memory Management**: Dynamic memory allocation concepts
- **Academic Projects**: Reference for computer science students

## 📋 Features

- ✅ **Comprehensive Coverage**: All fundamental linear data structures
- ✅ **Menu-Driven Interface**: User-friendly console interactions
- ✅ **Error Handling**: Proper validation and error messages
- ✅ **Educational Comments**: Well-documented code for learning
- ✅ **Modular Design**: Individual programs for each operation
- ✅ **Master Program**: Unified access to all implementations
- ✅ **Academic Standard**: Follows computer science curriculum
- ✅ **Practical Examples**: Real-world implementation scenarios

## 🔄 Future Enhancements

Potential areas for expansion:
- Non-linear data structures (Trees, Graphs)
- Advanced sorting algorithms
- Hash tables implementation
- GUI interface using graphics libraries
- Performance analysis and benchmarking
- Unit testing framework

## 🤝 Contributing

This is an educational project, but contributions are welcome:
1. Fork the repository
2. Create a feature branch
3. Add new data structures or improve existing ones
4. Ensure code follows the existing style
5. Submit a pull request with detailed description

## 📞 Contact & Support

- **Developer**: Malam Hari
- **Email**: malamharid@gmail.com  
- **Phone**: +91 7284080686
- **GitHub**: [@HariMalam](https://github.com/HariMalam)
- **LinkedIn**: Connect for academic discussions

## 📄 License

This project is developed for educational purposes as part of academic curriculum. Feel free to use it for learning and educational projects.

## 🙏 Acknowledgments

- Information Technology Department
- Data Structures and Algorithms Course (Semester 3)
- Faculty guidance and support
- Fellow students for testing and feedback

---

⭐ **Star this repository if it helped you learn data structures!**

💞 **Looking forward to collaborate on more educational projects!**