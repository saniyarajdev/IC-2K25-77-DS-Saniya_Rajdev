#include <iostream>
using namespace std;

#define MAX 5 

class InsertionSortClass {
    int a[MAX]; 

public:
    void inputData() {
        cout << "Enter " << MAX << " elements to sort:\n";
        for (int i = 0; i < MAX; i++) {
            cout << "Element " << i + 1 << ": ";
            cin >> a[i];
        }
    }

    void insertion_sort() {
        int temp;
        int j;
        
        // Outer loop starts from index 1 (since a single first element is already sorted)
        for (int i = 1; i < MAX; i++) {
            temp = a[i]; // Store the current element to insert
            j = i - 1;   // Start comparing with the element right before it
            
            // Look backward and shift elements up to create a space
            while (j >= 0 && a[j] > temp) {
                a[j + 1] = a[j]; // Shift element to the right
                j--;
            }
            
            // Drop temp into its correct sorted position
            a[j + 1] = temp;
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
    InsertionSortClass obj;
    obj.inputData();
    
    cout << "\nSorting using Insertion Sort...";
    obj.insertion_sort();
    
    obj.display();
    return 0;
}