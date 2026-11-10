#include <iostream>
using namespace std;

// 1. Function with no arguments and no return value
void display() 
{
    cout << "hello" << endl;
}

// 2. Function with arguments that prints directly (no return value)
void sum(int a, int b) 
{
    cout << "sum = " << a + b << endl;
}

// 3. Function with arguments that calculates and RETURNS a value
int multi(int a, int b) 
{
    int c = a * b;
    return c;
}

int main() 
{
    int p, q;

    cout << "before function calling" << endl;
    
    // Calling the display function
    display();

    cout << "pls enter two numbers: ";
    cin >> p >> q;

    int r = multi(p, q);
    cout << "multiplication=" << r << endl;
    
    cout << "after function calling" << endl;

    return 0;
}