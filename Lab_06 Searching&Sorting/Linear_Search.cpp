#include <iostream>
using namespace std;

#define N 5 

class linear_search {
    int a[N];   
    int num;    

public:
    // Constructor to take array input
    linear_search() {
        cout << "Enter Elements:\n";
        for (int i = 0; i < N; i++) {
            cout << "Element " << i + 1 << ": ";
            cin >> a[i];
        }
    }

    // --- Linear Search Function ---
    void search() {
        cout << "\nEnter data to be searched: ";
        cin >> num;

        int i;
        // Loop sequentially through each item
        for (i = 0; i < N; i++) {
            if (a[i] == num) {
                break; // Stop immediately once found
            }
        }

        // If loop completes without breaking, i will reach N
        if (i == N) {
            cout << "Element not found" << endl;
        } else {
            cout << "Element is at position " << i + 1 << endl;
        }
    }

    // Display function from the top page
    void display() {
        cout << "\nArray elements are: ";
        for (int i = 0; i < N; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    linear_search ls;
    ls.display();
    ls.search();
    
    return 0;
}