#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    if (rows <= 0 || rows > 10 || cols <= 0 || cols > 10)
    {
        cout << "Invalid matrix size.";
        return 0;
    }

    cout << "\nEnter elements of first matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "\nEnter elements of second matrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> b[i][j];
        }
    }

    // Addition of two matrices
    cout << "\nAddition of matrices:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose of first matrix
    cout << "\nTranspose of first matrix:\n";
    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}