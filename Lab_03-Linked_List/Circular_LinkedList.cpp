#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

// Circular Linked List Class
class CircularLL {
    node *start;
    node *on; 

public:
    CircularLL() {
        start = NULL;
        on = NULL;
    }

    void create();
    void display();
    void delete_c();
    void search();
    void count();
};

// 1. Create Function 
void CircularLL::create() {
    char c;
    do {
        node *nn = new node;
        cout << "Enter value: ";
        cin >> nn->data;
        nn->next = NULL;

        if (start == NULL) {
            start = nn;
            nn->next = start;
        } else {
            nn->next = start;
            on->next = nn;
        }
        on = nn; 

        cout << "Want to add more data (y/n): ";
        cin >> c;
    } while (c == 'y' || c == 'Y');
}

// 2. Display Function 
void CircularLL::display() {
    if (start == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    
    node *temp = start;
    cout << "Circular Linked List: ";
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != start);
    cout << "(back to start: " << start->data << ")" << endl;
}

// 3. Delete Function 
void CircularLL::delete_c() {
    if (start == NULL) {
        cout << "List is empty. Nothing to delete." << endl;
        return;
    }

    node *t, *p = NULL;
    int num;
    t = start;

    cout << "Enter num to delete: ";
    cin >> num;

    // Case 1: Only a single element exists in the list
    if (t->data == num && t->next == start) {
        start = NULL;
        on = NULL;
        delete t;
        cout << "Element deleted. List is now empty." << endl;
    } 
    // Case 2: Multiple elements exist
    else {
        do {
            if (t->data == num) {
                // If it is the first node
                if (t == start) {
                    start = t->next;
                    node *last = start;
                    while (last->next != t) {
                        last = last->next;
                    }
                    last->next = start;
                    delete t;
                    cout << "First element deleted." << endl;
                    break;
                } 
                // If it is a middle or end node
                else {
                    p->next = t->next;
                    if (t == on) { // If deleting the last node, update 'on'
                        on = p;
                    }
                    delete t;
                    cout << "Element deleted." << endl;
                    break;
                }
            } else {
                p = t;
                t = t->next;
            }
        } while (t != start);

        if (t == start) {
            cout << "Data not found" << endl;
        }
    }
}

// 4. Search Function 
void CircularLL::search() {
    if (start == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    int target, pos = 1;
    bool found = false;
    cout << "Enter element to search: ";
    cin >> target;

    node *temp = start;
    do {
        if (temp->data == target) {
            cout << "Element " << target << " found at position " << pos << "." << endl;
            found = true;
            break;
        }
        temp = temp->next;
        pos++;
    } while (temp != start);

    if (!found) {
        cout << "Element not found." << endl;
    }
}

// 5. Count Function 
void CircularLL::count() {
    if (start == NULL) {
        cout << "Total number of nodes: 0" << endl;
        return;
    }
    int total = 0;
    node *temp = start;
    do {
        total++;
        temp = temp->next;
    } while (temp != start);
    cout << "Total number of nodes: " << total << endl;
}
int main() {
    CircularLL obj;
    int choice;

    cout << "=== Circular Linked List System ===" << endl;

    while (true) {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Create List\n2. Display List\n3. Delete Element\n4. Search Element\n5. Count Nodes\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 6) {
            cout << "Exiting Circular Linked List Program..." << endl;
            break;
        }

        switch (choice) {
            case 1:
                obj.create();
                break;
            case 2:
                obj.display();
                break;
            case 3:
                obj.delete_c();
                break;
            case 4:
                obj.search();
                break;
            case 5:
                obj.count();
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
    return 0;
}