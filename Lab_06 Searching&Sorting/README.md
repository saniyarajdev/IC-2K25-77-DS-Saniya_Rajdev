# Lab 06 – Searching & Sorting

## Program 01 – Binary Search (Binary_Search.cpp)

### Problem Statement
Implement a class-based C++ program to perform Binary Search on a sorted array of elements to find the index position of a target element.

### Approach
Created a class `BinarySearchClass` with a constructor that handles taking input for elements in sorted order. The `BinS(int num)` function maintains a search window defined by lower bound (`lb`) and upper bound (`ub`) variables. In each step, the midpoint `mid` is updated. If the target matches `a[mid]`, a flag variable `f` is set to 1 and the loop terminates. If the target is greater, `lb` shifts to `mid + 1`, otherwise `ub` shifts to `mid - 1`.

### Time and Space Complexity
* **Time Complexity:** O(log N) where N is the number of elements, as the search region is halved at each step.
* **Space Complexity:** O(1) auxiliary space as the matching logic takes place in-place without dynamic data frames.

---

## Program 02 – Bubble Sort (Bubble_Sort.cpp)

### Problem Statement
Implement a class-based program to sort an array using the Bubble Sort algorithm.

### Approach
Created a class `BubbleSortClass` with an array bounded by macro parameter `MAX`. The `BS()` function sorts the array elements using nested structures: an outer loop tracking complete passes and an inner comparison loop checking side-by-side neighbors (`a[j]` and `a[j + 1]`). If the left item is greater than the right item, they trade positions using a temporary storage variable `t`.

### Time and Space Complexity
* **Time Complexity:** O(N²) in the worst and average cases due to two levels of nested tracking loops.
* **Space Complexity:** O(1) auxiliary space as elements are swapped in-place inside the pre-allocated memory frame.

---

## Program 03 – Insertion Sort (Insertion_Sort.cpp)

### Problem Statement
Implement a class-based program to arrange array numbers in ascending order using the Insertion Sort algorithm.

### Approach
Created a class `InsertionSortClass` that inputs an unsorted sequence. The `insertion_sort()` function starts checking elements from index 1, holding the current target value in a temporary tracking cell `temp`. It then looks backward through the already sorted section using a `while` loop, shifting all values larger than `temp` one position to the right to create a slot before inserting `temp` into its proper place.

### Time and Space Complexity
* **Time Complexity:** O(N²) in the worst case when the input sequence is completely inverted.
* **Space Complexity:** O(1) auxiliary space because operations occur in-place.

---

## Program 04 – Linear Search (Linear_Search.cpp)

### Problem Statement
Implement a class-based program to check for a value inside an array sequentially using the Linear Search algorithm.

### Approach
Created a class `linear_search` with a constructor that takes the array elements. The `search()` function prompts for a target value `num`, then iterates sequentially from `i = 0` to `N - 1`. If a matching item is encountered, the tracking loop breaks immediately. A conditional check evaluates if the tracking index `i` reached limit bounds `N` to determine whether to report a search miss or display the exact element position.

### Time and Space Complexity
* **Time Complexity:** O(N) linear time, since the program may need to inspect every single position in the worst-case scenario.
* **Space Complexity:** O(1) auxiliary space as it works natively within static memory layouts.

---

## Program 05 – Quick Sort (Quick_Sort.cpp)

### Problem Statement
Implement a class-based C++ program to sort an array using the recursive Divide and Conquer Quick Sort algorithm.

### Approach
Created a class `QuickSortClass` that breaks the sorting problem into two parts:
* `partition(int lb, int ub)`: Selects the lower bound element as the `pivot`. Two pointers (`start` and `end`) move inward from both boundaries. Elements out of order relative to the pivot swap positions. When the pointers cross, the pivot element is swapped with `a[end]` to place it in its permanent sorted index position (`loc`).
* `quick_sort(int lb, int ub)`: Recursively calls the partition function and divides the sub-arrays to sort the sections left and right of the pivot position.

### Time and Space Complexity
* **Time Complexity:** O(N log N) on average, splitting processing regions effectively across pivot thresholds.
* **Space Complexity:** O(log N) auxiliary space to handle the execution stack frames required for recursion.

---

## Program 06 – Selection Sort (Selection_Sort.cpp)

### Problem Statement
Implement a class-based program to arrange array numbers in ascending order using the Selection Sort algorithm.

### Approach
Created a class `SelectionSortClass` with an array bounded by the macro parameter `MAX`. The `selection_sort()` function uses an outer loop to point to the current position being filled (`i` from `0` up to `MAX - 1`). The inner loop scans through the remaining elements starting from `j = i + 1` to `MAX`. If a smaller element is found at `a[j]` compared to the current anchor `a[i]`, they are swapped immediately.

### Time and Space Complexity
* **Time Complexity:** O(N²) in the worst, best, and average cases because it always runs the nested scanning loops completely to find the minimum values.
* **Space Complexity:** O(1) auxiliary space as elements are swapped in-place.

---

## Sample Input/Output

### Program 01: Binary_Search.cpp
```text
Enter 10 elements in SORTED order:
Element 0: 10
Element 1: 20
Element 2: 30
Element 3: 40
Element 4: 50
Element 5: 60
Element 6: 70
Element 7: 80
Element 8: 90
Element 9: 100

Array elements are: 10 20 30 40 50 60 70 80 90 100 

Enter the value you want to search: 40

Element found at index: 3
```

### Program 02: Bubble_Sort.cpp
```text
Enter 5 elements to sort:
Element 1: 45
Element 2: 12
Element 3: 89
Element 4: 7
Element 5: 33

Sorting using Bubble Sort...
Sorted Array: 7 12 33 45 89 
```

### Program 03: Insertion_Sort.cpp
```text
Enter 5 elements to sort:
Element 1: 50
Element 2: 20
Element 3: 40
Element 4: 10
Element 5: 30

Sorting using Insertion Sort...
Sorted Array: 10 20 30 40 50 
```

### Program 04: Linear_Search.cpp
```text
Enter Elements:
Element 1: 23
Element 2: 54
Element 3: 12
Element 4: 90
Element 5: 67

Array elements are: 23 54 12 90 67 

Enter data to be searched: 12
Element is at position 3
```

### Program 05: Quick_Sort.cpp
```text
Enter 5 elements to sort:
Element 1: 34
Element 2: 7
Element 3: 23
Element 4: 81
Element 5: 12

Sorting using Quick Sort...
Sorted Array: 7 12 23 34 81 
```

### Program 06: Selection_Sort.cpp
```text
Enter 5 elements to sort:
Element 1: 29
Element 2: 64
Element 3: 15
Element 4: 11
Element 5: 42

Sorting using Selection Sort...
Sorted Array: 11 15 29 42 64 
```

---

## Learning Outcomes
* Mastered sequential and interval-halving lookup logic by implementing Linear and Binary search variations.
* Learned iterative array manipulation methods through Bubble, Insertion, and Selection sort passes.
* Understood advanced Divide and Conquer mechanisms by managing dynamic pointers and tracking pivot locations in Quick Sort.
