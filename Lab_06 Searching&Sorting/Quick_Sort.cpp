#include <iostream>
using namespace std;

#define MAX 7 

class QuickSortClass {
    int a[MAX]; 

public:
    void inputData() {
        cout << "Enter " << MAX << " elements to sort:\n";
        for (int i = 0; i < MAX; i++) {
            cout << "Element " << i + 1 << ": ";
            cin >> a[i];
        }
    }

    
    int partition(int lb, int ub) {
        int pivot = a[lb]; // Choosing the lower bound element as pivot
        int start = lb;
        int end = ub;

        while (start < end) {
            // Move start pointer forward while elements are smaller or equal to pivot
            while (a[start] <= pivot && start < ub) {
                start++;
            }
            // Move end pointer backward while elements are greater than pivot
            while (a[end] > pivot) {
                end--;
            }
            // If pointers haven't crossed, swap elements at start and end
            if (start < end) {
                int t = a[start];
                a[start] = a[end];
                a[end] = t;
            }
        }
        
        // Pointers have crossed; swap pivot element into its final sorted spot
        int t = a[end];
        a[end] = a[lb];
        a[lb] = t;
        
        return end; // Return final index of the pivot
    }

    void quick_sort(int lb, int ub) {
        if (lb < ub) {
            int loc = partition(lb, ub);  // Partition the array
            quick_sort(lb, loc - 1);      // Recursively sort the left sub-array
            quick_sort(loc + 1, ub);     // Recursively sort the right sub-array
        }
    }

    void display() {
        cout << "\nSorted Array: ";
        for (int i = 0; i < MAX; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    QuickSortClass obj;
    obj.inputData();
    
    cout << "\nSorting using Quick Sort...";
    // Call quick_sort from lower bound (0) to upper bound (MAX - 1)
    obj.quick_sort(0, MAX - 1);
    
    obj.display();
    return 0;
}