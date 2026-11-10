#include <iostream>
using namespace std;

int main()
{
    int A[2][2][2][2][2];

    cout << "Enter 32 elements of the 5D array:\n";

    // Input Loops with explicit brackets
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                for (int l = 0; l < 2; l++) {
                    for (int m = 0; m < 2; m++) {
                        cin >> A[i][j][k][l][m];
                    }
                }
            }
        }
    }

    cout << "\nElements of the 5D array:\n";

    // Output Loops with explicit brackets
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                for (int l = 0; l < 2; l++) {
                    for (int m = 0; m < 2; m++) {
                        cout << A[i][j][k][l][m] << " ";
                    }
                }
            }
        }
    }

    cout << endl;
    return 0;
}