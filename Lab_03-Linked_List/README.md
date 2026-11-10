# Lab 03 – Linked List

## Program 01 – Singly Linked List Operations (Singly_LinkedList.cpp)

### Problem Statement
Implement a menu-driven C++ program to perform foundational operations on a Singly Linked List, including creating the list, displaying nodes, inserting a node at any position, deleting a node, counting total nodes, and searching for an element.

### Approach
Created a class structure with node pointers to manage sequential linear allocations. The following operations are controlled via an interactive menu:
* **Create List (Case 1):** Instantiates the initial list structure and appends elements sequentially.
* **Display List (Case 2):** Traverses the list linearly from the head pointer to the tail node, printing each node's data.
* **Insert Element (Case 3):** Prompts the user for a specific position and value, traverses to the targeted index, updates pointers to link the new node, and shifts connections accordingly.
* **Delete Element (Case 4):** Traverses to the target element node, updates the preceding node's next pointer to bypass it, and frees up memory.
* **Count Nodes (Case 5):** Linearly increments a tracking variable across the list to output total nodes.
* **Search Element (Case 6):** Iterates through node elements to check for a value match and returns its presence.

### Time and Space Complexity
* **Time Complexity:** 
  * Creation, Traversal, Counting, and Searching: O(N) where N is the total count of active nodes.
  * Insertion and Deletion: O(N) in the worst case to traverse down to the specific index.
* **Space Complexity:** O(1) auxiliary space as modifications occur directly on node pointer addresses without supplementary array allocations.

---

## Program 02 – Circular Linked List Operations (Circular_LinkedList.cpp)

### Problem Statement
Write a menu-driven program to implement a Circular Linked List to manage dynamic nodes where the last node links back to the head node.

### Approach
Implemented a circular link configuration via a class-based switch-case dashboard system:
* **Create List (Case 1):** Sets up the dynamic list ensuring the final element connects back to the starting head address pointer.
* **Display List (Case 2):** Traverses using a loop block to print node values, stopping precisely when the reference address cycles back to the start.
* **Delete Element (Case 3):** Disconnects a node from the ring structure, linking the neighboring open nodes back together seamlessly.
* **Search Element (Case 4):** Sequentially tracks matching elements across the loop circle.
* **Count Nodes (Case 5):** Measures the circular ring size and outputs the data.

### Time and Space Complexity
* **Time Complexity:** O(N) for insertion, deletion, searching, and traversal operations due to linear circular traversals.
* **Space Complexity:** O(1) auxiliary space as it handles dynamic structural data modifications in-place.

---

## Time and Space Complexity Summary
* **Time Complexity:** O(N) for linear operations across both singly and circular link systems.
* **Space Complexity:** O(1) auxiliary space across both programs.

---

## Sample Input/Output

### Program 01: Singly_LinkedList.cpp
```text
=== Singly Linked List System ===

--- Menu ---
1. Create List
2. Display List
3. Insert Element
4. Delete Element
5. Count
6. Search
Enter your choice: 1

Enter value: 10
Do you want to add more? (y/n): y
Enter value: 20
Do you want to add more? (y/n): n

--- Menu ---
1. Create List
2. Display List
3. Insert Element
4. Delete Element
5. Count
6. Search
Enter your choice: 2
Linked List elements are: 10 -> 20 -> NULL

--- Menu ---
1. Create List
2. Display List
3. Insert Element
4. Delete Element
5. Count
6. Search
Enter your choice: 3
Enter position and value to insert: 2 15

--- Menu ---
1. Create List
2. Display List
3. Insert Element
4. Delete Element
5. Count
6. Search
Enter your choice: 2
Linked List elements are: 10 -> 15 -> 20 -> NULL

--- Menu ---
1. Create List
2. Display List
3. Insert Element
4. Delete Element
5. Count
6. Search
Enter your choice: 7
Exiting Singly Linked List Program...
```

### Program 02: Circular_LinkedList.cpp
```text
=== Circular Linked List System ===

--- Menu ---
1. Create List
2. Display List
3. Delete Element
4. Search Element
5. Count
Enter your choice: 1

Enter value: 50
Do you want to add more? (y/n): y
Enter value: 60
Do you want to add more? (y/n): n

--- Menu ---
1. Create List
2. Display List
3. Delete Element
4. Search Element
5. Count
Enter your choice: 2
Circular Linked List elements are: 50 -> 60 -> (back to head: 50)

--- Menu ---
1. Create List
2. Display List
3. Delete Element
4. Search Element
5. Count
Enter your choice: 5
Total number of nodes: 2

--- Menu ---
1. Create List
2. Display List
3. Delete Element
4. Search Element
5. Count
Enter your choice: 6
Exiting Circular Linked List Program...
```

---

## Learning Outcomes
* Mastered runtime link manipulation methods using dynamic heap pointer routing setups.
* Gained a clear understanding of the structural handling differences between linear and circular self-referencing nodes.
* Learned memory lifecycle management by safely deleting pointers to prevent system leaks.
