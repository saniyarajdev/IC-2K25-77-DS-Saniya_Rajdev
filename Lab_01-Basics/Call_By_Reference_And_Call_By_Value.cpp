#include <iostream>
using namespace std;

// 1. Call by Value 
void mySwapValue(int x, int y) 
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

// 2. Call by Reference
void mySwapReference(int &x, int &y) 
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main () 
{
    // Variables for testing Call by Value
    int a1 = 10, b1 = 20;
    cout << "=== Testing Call by Value ===" << endl;
    cout << "Before: a1 = " << a1 << ", b1 = " << b1 << endl;
    mySwapValue(a1, b1);
    cout << "After:  a1 = " << a1 << ", b1 = " << b1 << " (Unchanged!)\n" << endl;

    // Variables for testing Call by Reference
    int a2 = 10, b2 = 20;
    cout << "=== Testing Call by Reference ===" << endl;
    cout << "Before: a2 = " << a2 << ", b2 = " << b2 << endl;
    mySwapReference(a2, b2);
    cout << "After:  a2 = " << a2 << ", b2 = " << b2 << " (Successfully Swapped!)" << endl;

    return 0;
}