# Lab 04 – Queue

## Program 01 – Queue Implementation (Queue_Implementation.cpp)

### Problem Statement
Implement a menu-driven C++ program to perform basic operations on a linear Queue data structure, including data entry (Enqueue), data removal (Dequeue), and visualization of active elements.

### Approach
The program builds a linear Queue memory block using standard function hooks managed inside a dynamic `do-while` menu dashboard configuration:
* **Enqueue (Case 1):** Prompts the user for a new data value, inserts it at the rear of the structure, and updates the boundary tracking references.
* **Dequeue (Case 2):** Extracts the earliest added element from the front boundary reference point and updates the queue alignment pointers.
* **Display (Case 3):** Traverses the collection sequentially from front to rear to print all currently active data values to the console window.
* **Exit (Case 4):** Terminates the operational workspace loop cleanly.

### Time and Space Complexity
* **Time Complexity:** 
  * Enqueue and Dequeue operations execute in O(1) constant time, as they update boundary index pointers natively without element shifts.
  * Display traversal runs in O(N) linear time, where N is the total count of elements within the boundaries.
* **Space Complexity:** O(1) auxiliary space as it handles structural changes in-place using a static pre-allocated array space.

---

## Sample Input/Output

### Program 01: Queue_Implementation.cpp
```text
1. Enqueue
2. Dequeue
3. Display
4. Exit

Enter your choice: 1
Enter value: 15

1. Enqueue
2. Dequeue
3. Display
4. Exit

Enter your choice: 1
Enter value: 25

1. Enqueue
2. Dequeue
3. Display
4. Exit

Enter your choice: 3
Queue elements are: 15 25 

1. Enqueue
2. Dequeue
3. Display
4. Exit

Enter your choice: 2
Dequeued element successfully.

1. Enqueue
2. Dequeue
3. Display
4. Exit

Enter your choice: 3
Queue elements are: 25 

1. Enqueue
2. Dequeue
3. Display
4. Exit

Enter your choice: 4
Exiting...
```

---

## Learning Outcomes
* Understood the core First-In, First-Out (FIFO) behavioral architecture governing standard Queue systems.
* Gained hands-on experience manipulating boundary reference point coordinates (`front` and `rear`) to route sequential data streams.
* Practiced implementing dynamic menu loops using interactive case-based switch execution branches.
