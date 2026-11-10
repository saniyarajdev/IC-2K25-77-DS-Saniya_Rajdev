#include <iostream>
using namespace std;
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value)
{
    if(rear == SIZE - 1)
    {
        cout << "Queue Overflow\n";
    }
    else
    {
        if(front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        cout << value << " inserted\n";
    }
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        cout << "Queue Underflow\n";
    }
    else
    {
        cout << queue[front] << " deleted\n";
        front++;

        if(front > rear)
        {
            front = rear = -1;
        }
    }
}

void display()
{
    if(front == -1)
    {
        cout << "Queue is empty\n";
    }
    else
    {
        cout << "Queue elements are:\n";

        for(int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int choice, value;

    do
    {
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Display";
        cout << "\n4. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid choice";
        }

    } while(choice != 4);

    return 0;
}