#include <iostream>
using namespace std;

#define MAX 5 

class BubbleSortClass {
    int a[MAX]; 

public:
    void inputData() {
        cout << "Enter " << MAX << " elements to sort:\n";
        for (int i = 0; i < MAX; i++) {
            cout << "Element " << i + 1 << ": ";
            cin >> a[i];
        }
    }

    void BS() {
        for (int i = 0; i < MAX; i++) {
            for (int j = 0; j < (MAX - 1 - i); j++) {
                if (a[j] > a[j + 1]) {
                    // Swap logic
                    int t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
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
    BubbleSortClass obj;
    obj.inputData();
    
    cout << "\nSorting using Bubble Sort...";
    obj.BS();
    
    obj.display();
    return 0;
}