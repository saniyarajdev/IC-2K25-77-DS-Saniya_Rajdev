# Lab 05 – Stack

## Program 01 – Stack Implementation (Stack_Implementation.cpp)

### Problem Statement
Implement a menu-driven C++ program to perform basic operations on a Stack data structure using an object-oriented class implementation, including adding elements (Push), removing elements (Pop), and displaying the stack elements.

### Approach
The program defines a stack class structure named `stac`, initializing an instance `s` inside a interactive `do-while` menu context loop to manage standard operations:
* **Push (Case 1):** Invokes the `s.push()` member function to insert a user-specified value at the top boundary pointer of the stack workspace, adjusting limits accordingly.
* **Pop (Case 2):** Invokes the `s.pop()` member function to remove the most recently added element from the top reference point of the tracking frame.
* **Display (Case 3):** Invokes the `s.display()` member function to traverse sequentially down from the active top element index to expose current numbers within the terminal console.
* **Loop Control:** Evaluates an explicit character check request (`c == 'y' || c == 'Y'`) after each dashboard switch choice to decide whether to continue workspace execution.

### Time and Space Complexity
* **Time Complexity:** 
  * Push and Pop operations execute in O(1) constant time as they adjust the explicit top index marker natively without scanning data arrays.
  * Display execution runs in O(N) linear time, where N is the total count of active elements currently contained on the stack tracking layer.
* **Space Complexity:** O(1) auxiliary space as data changes are processed directly inside the pre-allocated fixed memory structure layout.

---

## Sample Input/Output

### Program 01: Stack_Implementation.cpp
```text
1. Push
2. Pop
3. Display
Enter your choice: 1

Enter element to push: 45
Do you want to continue? (y/n): y

1. Push
2. Pop
3. Display
Enter your choice: 1

Enter element to push: 82
Do you want to continue? (y/n): y

1. Push
2. Pop
3. Display
Enter your choice: 3

Stack elements are: 82 45 
Do you want to continue? (y/n): y

1. Push
2. Pop
3. Display
Enter your choice: 2

Popped element successfully.
Do you want to continue? (y/n): y

1. Push
2. Pop
3. Display
Enter your choice: 3

Stack elements are: 45 
Do you want to continue? (y/n): n
```

---

## Learning Outcomes
* Mastered the core Last-In, First-Out (LIFO) behavioral logic driving Stack memory models.
* Understood index boundary constraints (Handling underflow and overflow tracking bounds) using a tracked pointer scheme.
* Gained experience controlling persistent workspace states using interactive menu check boundaries.

