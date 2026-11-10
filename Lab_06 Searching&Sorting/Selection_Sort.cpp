#include <iostream>
using namespace std;

#define MAX 5 

class SelectionSortClass {
    int a[MAX]; 

public:
    void inputData() {
        cout << "Enter " << MAX << " elements to sort:\n";
        for (int i = 0; i < MAX; i++) {
            cout << "Element " << i + 1 << ": ";
            cin >> a[i];
        }
    }

    void selection_sort() {
        // Outer loop: points to the position being filled (up to max - 1)
        for (int i = 0; i < MAX - 1; i++) {
            
            // Inner loop: scans through the remaining elements
            for (int j = i + 1; j < MAX; j++) {
                
                // If a smaller element is found, swap it immediately
                if (a[i] > a[j]) {
                    int t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
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
    SelectionSortClass obj;
    obj.inputData();
    
    cout << "\nSorting using Selection Sort...";
    obj.selection_sort();
    
    obj.display();
    return 0;
}