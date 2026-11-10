# Data Structures and Algorithms Lab

## Student Details
* **Roll Number:** IC-2K25-77
* **Name:** Saniya Rajdev

---

## Repository Overview
* This repository contains practical assignments completed as part of the Data Structures and Algorithms (DSA) Lab. It includes C++ source code files, structured implementation logic, complexity breakdowns, and clear code documentation.
* All programs are executed using standard C++ compilers within the Visual Studio Code (VS Code) environment.

---

## Repository Structure

```text
IC-2K25-77-DS-Saniya_Rajdev/
│
├── README.md                             # Master repository document
│
├── Lab_01-Basics/
│   ├── README.md                         # Lab 01 specific overview
│   ├── Call_By_Reference_And_Call_By_Value.cpp
│   └── Functions_C++.cpp
│
├── Lab_02-Introduction_To_Arrays/
│   ├── README.md                         # Lab 02 specific overview
│   ├── Array_Operations.cpp
│   ├── 2D_Array_Operations.cpp
│   ├── Array_5D.cpp
│   └── Matrix_Calculator.cpp
│
├── Lab_03-Linked_List/
│   ├── README.md                         # Lab 03 specific overview
│   ├── Singly_LinkedList.cpp
│   └── Circular_LinkedList.cpp
│
├── Lab_04-Queue/
│   ├── README.md                         # Lab 04 specific overview
│   └── Queue_Implementation.cpp
│
├── Lab_05-Stack/
│   ├── README.md                         # Lab 05 specific overview
│   └── Stack_Implementation.cpp
│
├── Lab_06-Searching&Sorting/
│   ├── README.md                         # Lab 06 specific overview
│   ├── Binary_Search.cpp
│   ├── Bubble_Sort.cpp
│   ├── Insertion_Sort.cpp
│   ├── Linear_Search.cpp
│   ├── Quick_Sort.cpp
│   └── Selection_Sort.cpp
│
└── Lab_07-Trees/
    ├── README.md                         # Lab 07 specific overview
    └── Trees_Implementation.cpp
```

---

## Architectural Breakdown By Lab Units

### Lab 01 – Basics of C++ & Functions
Swapping algorithms and functional signatures were implemented to analyze runtime memory behaviors.
*   **Call by Value:** Copies local scalar data items onto temporary isolated stack partitions. 
*   **Call by Reference:** Forwards structural memory pointer labels (`&`), bypassing copying overhead and updating variable segments natively.
*   **Time & Space Complexity:** O(1) time complexity, O(1) space complexity.

### Lab 02 – Introduction to Arrays
Static data blocks were parsed sequentially across single and multidimensional configurations.
*   **Operations:** Fixed runtime array insertions, structural inversion loops, element shifting, and element-wise matrix algebraic logic.
*   **Array Dimensions:** Structured up to a custom 5-dimensional arrangement (`A`) traversed via nested loops.
*   **Time & Space Complexity:** O(N) for linear shifts and updates; O(R * C) for matrix metrics.

### Lab 03 – Linked List
Dynamic heap allocation structures were built to manage structural links dynamically.
*   **Singly Linked List:** A unidirectional sequence managed through manual head reference links.
*   **Circular Linked List:** A closed ring configuration where the final node paths link back to the head address block.
*   **Time & Space Complexity:** O(N) runtime to traverse to target boundaries; O(1) auxiliary space allocations.

### Lab 04 – Queue
An abstract buffer model was designed using a strict First-In, First-Out (FIFO) pipeline topology.
*   **Core Logic:** Enqueue writes new elements sequentially at the trailing `rear` boundary tracking index; Dequeue purges items from the leading `front` address coordinate.
*   **Time & Space Complexity:** O(1) push/pop pipeline time execution rules; O(1) space tracking.

### Lab 05 – Stack
An abstract structure was created around Last-In, First-Out (LIFO) tracking rules.
*   **Core Logic:** Implements `push()`, `pop()`, and `display()` elements from a moving `top` constraint pointer framework, backed by structural safety checks for stack overflow and underflow tracking bounds.
*   **Time & Space Complexity:** O(1) time processing sequences for mutations; O(1) memory space boundaries.

### Lab 06 – Searching & Sorting
Comparative evaluations were conducted on standard searching routines and structural ordering passes.
*   **Searching:** Compares Linear continuous index tracing [Worst Case: O(N)] against binary interval-halving splits [Worst Case: O(log N)].
*   **Iterative Sorting:** Implements Bubble, Selection, and Insertion algorithms to evaluate sorting passes on small data sets [Time: O(N²)].
*   **Advanced Sorting:** Implements the Quick Sort Divide and Conquer routine using pivot partitioning swaps to optimize runtime speeds [Average Time: O(N log N)].

### Lab 07 – Trees
Non-linear hierarchical data relationships were mapped out through a Binary Search Tree (BST) network framework.
*   **Logic:** Enforces left branch properties for values smaller than parent roots, and right branch properties for greater configurations. 
*   **Traversals:** Parsed structural layouts recursively through Pre-order (DLR), In-order (LDR - yields sorted values), and Post-order (LRD) loops.
*   **Time & Space Complexity:** O(H) average time tracking where H equals tree height levels; O(H) recursive stack footprint space constraints.

---

## Algorithmic Summary Reference Matrix

| Lab Module / Target File | Primary Core Algorithm | Time Complexity (Average) | Space Complexity (Auxiliary) |
| :--- | :--- | :--- | :--- |
| **Lab 01:** `Call_By_Reference_And_Call_By_Value.cpp` | In-place Data Swap Arithmetic | O(1) | O(1) |
| **Lab 02:** `Array_Operations.cpp` | Element Shift Insertion | O(N) | O(1) |
| **Lab 02:** `Matrix_Calculator.cpp` | Nested Loop Matrix Product | O(R * C * K) | O(R * C) |
| **Lab 03:** `Singly_LinkedList.cpp` | Linear Pointer Traversal | O(N) | O(1) |
| **Lab 04:** `Queue_Implementation.cpp` | FIFO Array Pointer Route | O(1) | O(1) |
| **Lab 05:** `Stack_Implementation.cpp` | LIFO Top Pointer Mutation | O(1) | O(1) |
| **Lab 06:** `Linear_Search.cpp` | Sequential Scanning Match | O(N) | O(1) |
| **Lab 06:** `Binary_Search.cpp` | Interval-Halving Window Split | O(log N) | O(1) |
| **Lab 06:** `Quick_Sort.cpp` | Divide & Conquer Partitioning | O(N log N) | O(log N) |
| **Lab 07:** `Trees_Implementation.cpp` | Recursive BST Node Eviction | O(log N) | O(H) |

---
## Tools Used

* Visual Studio Code (VS Code)
* C++ (G++ Compiler / Standard Template Library templates)
---

## Core Engineering Competencies Gained
1.  **Memory Architecture Management:** Gained experience tracing dynamic heap variable frames versus compiler-managed stack partitions.
2.  **Object-Oriented Design Rules:** Gained skill encapsulating algorithm states cleanly inside C++ modular interface configurations (`classes`).
3.  **Algorithmic Analysis Mastery:** Acquired the ability to evaluate and defend complexity thresholds across alternative code paths during lab assessments.
