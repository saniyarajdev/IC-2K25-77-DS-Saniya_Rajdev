#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r, col, choice;

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> col;

    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> b[i][j];
        }
    }

    cout << "\n1. Addition";
    cout << "\n2. Subtraction";
    cout << "\n3. Multiplication";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < col; j++)
                {
                    c[i][j] = a[i][j] + b[i][j];
                }
            }
            break;

        case 2:
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < col; j++)
                {
                    c[i][j] = a[i][j] - b[i][j];
                }
            }
            break;

        case 3:
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < col; j++)
                {
                    c[i][j] = 0;
                    for(int k = 0; k < col; k++)
                    {
                        c[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
            break;

        default:
            cout << "Invalid choice";
            return 0;
    }

    cout << "\nResult Matrix:\n";

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}