#include <iostream>
using namespace std;

#define MAX 3

class stac 
{
private:
    int a[MAX], top;

public:
    stac();
    void push();
    void pop();
    void display();
};

// Constructor to initialize the stack
stac::stac() 
{
    for (int i = 0; i < MAX; i++) {
        a[i] = 0; // 0 indicates that there is no element in the stack
    }
    top = -1;
}

// Push operation to add an element
void stac::push() 
{
    int n;
    cout << "Enter the element to push: ";
    cin >> n;
    
    if (top == MAX - 1) {
        cout << "Stack Overflow\n";
    } else {
        top++;
        a[top] = n;
    }
}

// Pop operation to remove an element
void stac::pop() 
{
    int d;
    if (top == -1) {
        cout << "Stack Underflow\n";
    } else {
        d = a[top];
        top--;
        cout << "Item popped is: " << d << "\n";
    }
}

// Display operation to print the stack elements
void stac::display() 
{
    if (top == -1) {
        cout << "Stack has no element\n";
    } else {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}

// Main function to run the menu-driven program
int main() 
{
    stac s;
    int choice;
    char c;
    
    do {
        cout << "\n1. Push\n2. Pop\n3. Display\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                s.push();
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            default:
                cout << "Invalid choice!\n";
        }
        
        cout << "Do you want to continue? (y/n): ";
        cin >> c;
    } while (c == 'y' || c == 'Y');
    
    return 0;
}