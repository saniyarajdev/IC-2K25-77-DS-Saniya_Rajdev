# Lab 01 – Basics of C++ & Functions

## Program 01 – Call by Value and Call by Reference

### Problem Statement
Demonstrate and compare Call by Value and Call by Reference using a value-swapping algorithm.

### Approach
* **Call by Value:** Passes copies of variables to a function. Changes do not affect the original variables.
* **Call by Reference:** Passes variables by reference using `&`. Changes directly affect the original variables.

---

## Program 02 – Types of User-Defined Functions

### Problem Statement
Implement different types of user-defined functions based on arguments and return values.

### Approach
Implemented the following function types:
1. No Arguments and No Return Value.
2. Arguments and No Return Value.
3. Arguments and Return Value.

---

## Time and Space Complexity
* **Time Complexity:** O(1) – Both programs perform a fixed number of operations.
* **Space Complexity:** O(1) – Both programs use a fixed amount of memory.

---

## Sample Input/Output

### Program 01 (Call_By_Reference_And_Call_By_Value.cpp)
```text
=== Testing Call by value ===
Before a1 = 10, b1 = 20
After a1 = 10, b1 = 20 (Unchanged)

=== Testing Call by reference ===
Before a2 = 10, b2 = 20
After a2 = 20, b2 = 10 (Changed)
```

### Program 02 (Functions_C++.cpp)
```text
Before function calling
Hello

Plz enter the numbers:
4 5
Multiplication = 20
After function calling
```

---

## Learning Outcomes
* Understood Call by Value and Call by Reference.
* Learned the different types of user-defined functions in C++.
* Practised passing arguments and returning values from functions.
