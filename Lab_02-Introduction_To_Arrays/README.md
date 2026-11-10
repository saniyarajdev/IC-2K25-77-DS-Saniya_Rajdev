# Lab 02 – Introduction to Arrays

## Program 01 – 1D Array Operations (Array_Operations.cpp)

### Problem Statement
Implement a class-based C++ program to perform basic operations on a 1D array, including taking inputs, displaying elements, inserting an element at a specific index, finding maximum/minimum values, and reversing the array.

### Approach
Created a class `Arr` with public member functions:
* `get()`: Takes the size of the array and inputs the elements sequentially.
* `put()`: Traverses and displays the current array elements.
* `insert()`: Takes a 1-based index position and new data value, shifts subsequent elements to the right, inserts the data, and increments the array size tracking variable.
* `rev_put()`: Iterates backwards from `size - 1` down to `0` to display the array in reverse order.
* `maxi()` and `mini()`: Scan the array sequentially to compute and display the maximum and minimum elements respectively.

### Time and Space Complexity
* **Time Complexity:** 
  * Insertion and reversal: O(N) where N is the number of elements.
  * Maximum/Minimum finding: O(N) as it requires a single full pass.
* **Space Complexity:** O(1) auxiliary space as operations are performed in-place within the pre-allocated array space.

---

## Program 02 – 2D Array Operations (2D_Array_Operations.cpp)

### Problem Statement
Write a program to perform foundational operations on a 2D matrix, including matrix input, matrix addition, and computing the matrix transpose.

### Approach
* **Matrix Inputs:** Prompts user for rows and columns, validates dimensions, and reads elements sequentially for two separate matrix storage layouts.
* **Addition:** Iterates through the rows and columns using nested loops to compute `sum[i][j] = a[i][j] + b[i][j]` and prints the resulting sum matrix.
* **Transpose:** Reverses the nested loop access order by traversing column-wise first to display the transposed layout of the first matrix (`a[i][j]`).

### Time and Space Complexity
* **Time Complexity:** O(R * C) where R is rows and C is columns due to nested loop traversals over the matrix dimensions.
* **Space Complexity:** O(R * C) to store the inputs and calculated summary blocks inside matrix tracking structures.

---

## Program 03 – 5D Array Basics (Array_5D.cpp)

### Problem Statement
Implement a program to instantiate, populate, and traverse a five-dimensional array layout.

### Approach
Declared a fixed 5D array layout `int A[2][2][2][2][2]`. Populated all 32 distinct element spaces sequentially using five nested loops (`i`, `j`, `k`, `l`, and `m`), then outputted the linear structure sequentially to the terminal workspace using matching nested output loops.

### Time and Space Complexity
* **Time Complexity:** O(1) constant time, as it always executes a fixed loop traversal sequence of exactly 32 steps (2 * 2 * 2 * 2 * 2).
* **Space Complexity:** O(1) static space allocation for the fixed-size multivariable layout.

---

## Program 04 – Menu Driven Matrix Calculator (Matrix_Calculator.cpp)

### Problem Statement
Create an interactive menu-driven calculator program to perform matrix addition, subtraction, and standard row-column matrix multiplication.

### Approach
Takes dimensions and elements for two distinct matrices `a` and `b`. Provides a switch-case selection menu to handle execution pathways:
1. **Addition:** Computes and assigns values using the relation `c[i][j] = a[i][j] + b[i][j]`.
2. **Subtraction:** Computes and assigns values using the relation `c[i][j] = a[i][j] - b[i][j]`.
3. **Multiplication:** Implements standard matrix multiplication using three nested loops (`i`, `j`, `k`) with an accumulator loop sequence: `c[i][j] += a[i][k] * b[k][j]`.

### Time and Space Complexity
* **Time Complexity:** 
  * Addition/Subtraction: O(R * C)
  * Matrix Multiplication: O(R * C * K) where R, C, and K represent loop bounds.
* **Space Complexity:** O(R * C) to maintain the distinct output results matrix `c`.

---

## Sample Input/Output

### Program 01: Array_Operations.cpp
```text
Enter size of array: 4
Enter 4 elements: 12 35 7 22

Array elements are: 12 35 7 22 

Insert position & data: 2 50

Array elements are: 12 50 35 7 22 

Array in reverse order: 22 7 35 50 12 

Maximum = 50

Minimum = 7
```

### Program 02: 2D_Array_Operations.cpp
```text
Enter number of rows: 2
Enter number of columns: 2

Enter elements of first matrix:
1 2
3 4

Enter elements of second matrix:
5 6
7 8

Addition of matrices:
6 8 
10 12 

Transpose of first matrix:
1 3 
2 4 
```

### Program 03: Array_5D.cpp
```text
Enter 32 elements of the 5D array:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32

Elements of the 5D array:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 
```

### Program 04: Matrix_Calculator.cpp
```text
Enter elements of first matrix:
1 2
3 4
Enter elements of second matrix:
5 6
7 8

1. Addition
2. Subtraction
3. Multiplication
Enter your choice: 1

Result Matrix:
6 8 
10 12 
```

---

## Learning Outcomes
* Mastered element addressing logic for multi-dimensional array boundaries (1D, 2D, and 5D configurations).
* Learned element shifting index arithmetic required for runtime sequential insertions.
* Practiced implementing class structures and interactive switch menus for tracking operational algorithms.
