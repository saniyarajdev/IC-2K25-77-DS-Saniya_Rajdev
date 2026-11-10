#include <iostream>
using namespace std;

#define MAX 10 

class BinarySearchClass {
    int a[MAX]; 

public:
    // Constructor handles inputting elements (loop from i=0 to i<=9)
    BinarySearchClass() {
        cout << "Enter " << MAX << " elements in SORTED order:\n";
        for (int i = 0; i < MAX; i++) {
            cout << "Element " << i << ": ";
            cin >> a[i];
        }
    }

    void BinS(int num) {
        int lb = 0;
        int ub = MAX - 1;
        int mid;
        int f = 0; // Flag variable (f=1 means element found)

        // Loop runs while the search space bounds haven't crossed
        while (lb <= ub) {
            mid = (lb + ub) / 2;

            // Check if element is found at the middle position
            if (a[mid] == num) {
                f = 1;
                break;
            }
            // If the middle element is smaller than our target, search the right half
            if (a[mid] < num) {
                lb = mid + 1;
            }
            // If the middle element is larger than our target, search the left half
            else {
                ub = mid - 1;
            }
        }

        // Output results based on flag value
        if (f == 1) {
            cout << "\nElement found at index: " << mid << endl;
        } else {
            cout << "\nElement not found." << endl;
        }
    }

    void display() {
        cout << "\nArray elements are: ";
        for (int i = 0; i < MAX; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    BinarySearchClass B;
    int searchNum;

    B.display();

    cout << "\nEnter the value you want to search: ";
    cin >> searchNum;

    B.BinS(searchNum);

    return 0;
}