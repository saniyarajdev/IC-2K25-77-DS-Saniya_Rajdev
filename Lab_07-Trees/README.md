# Lab 07 – Trees

## Program 01 – Binary Search Tree Operations (Trees_Implementation.cpp)

### Problem Statement
Implement a class-based, menu-driven C++ program to perform core operations on a Binary Search Tree (BST), including iterative node insertion, recursive element deletion, and tree traversals (Pre-order, In-order, and Post-order).

### Approach
The program defines a structural representation for tree nodes (`struct node`) and groups all algorithmic behaviors inside a manager class (`class BST`). It provides an interactive command console interface via a `while` loop containing a `switch-case` framework:
* **Insert Element (Case 1):** Performs an iterative traversal down the tree hierarchy using structural tracking pointers to find the correct leaf node position, placing values less than the parent on the left branch and greater values on the right branch.
* **Delete Element (Case 2):** Calls a user-facing helper interface that triggers a recursive backend function (`delete_e`). It handles three structural removal test cases: leaf nodes, nodes with a single child, and nodes with two children (which are replaced by their minimum in-order successor values).
* **Display Traversals (Case 3):** Routes execution pointers to three independent recursive tracking functions:
  1. *Pre-order:* Root -> Left -> Right depth-first progression.
  2. *In-order:* Left -> Root -> Right progression (which lists tree numbers in sorted order).
  3. *Post-order:* Left -> Right -> Root structural progression.
* **Exit (Case 4):** Clears the active console frame and terminates execution workspace loops cleanly.

### Time and Space Complexity
* **Time Complexity:** 
  * Insertion, Deletion, and Searching: O(H) on average, where H is the height of the tree. In the worst-case scenario of a skewed tree, it simplifies to O(N).
  * Traversals (Pre-order, In-order, Post-order): O(N) linear time, as every node must be visited exactly once.
* **Space Complexity:** O(H) auxiliary space on the call stack frame to handle recursive tracking paths, simplifying to O(N) for skewed tree bounds.

---

## Sample Input/Output

### Program 01: Trees_Implementation.cpp
```text
--- BINARY SEARCH TREE MENU ---
1. Insert Element
2. Delete Element
3. Display Traversals
4. Exit
Enter choice: 1
Enter value to insert: 58

--- BINARY SEARCH TREE MENU ---
1. Insert Element
2. Delete Element
3. Display Traversals
4. Exit
Enter choice: 1
Enter value to insert: 14

--- BINARY SEARCH TREE MENU ---
1. Insert Element
2. Delete Element
3. Display Traversals
4. Exit
Enter choice: 1
Enter value to insert: 76

--- BINARY SEARCH TREE MENU ---
1. Insert Element
2. Delete Element
3. Display Traversals
4. Exit
Enter choice: 3

Preorder: 58 14 76 
Inorder: 14 58 76 
Postorder: 14 76 58 

--- BINARY SEARCH TREE MENU ---
1. Insert Element
2. Delete Element
3. Display Traversals
4. Exit
Enter choice: 2
Enter value to delete: 14

--- BINARY SEARCH TREE MENU ---
1. Insert Element
2. Delete Element
3. Display Traversals
4. Exit
Enter choice: 3

Preorder: 58 76 
Inorder: 58 76 
Postorder: 76 58 

--- BINARY SEARCH TREE MENU ---
1. Insert Element
2. Delete Element
3. Display Traversals
4. Exit
Enter choice: 4
Exiting program...
```

---

## Learning Outcomes
* Understood non-linear hierarchical data relationships by managing multi-branching tree structures.
* Gained experience handling complex multi-pointer variations during dynamic runtime node deletions.
* Developed a firm understanding of structural parsing rules by coding distinct recursive pre-order, in-order, and post-order traversal functions.
