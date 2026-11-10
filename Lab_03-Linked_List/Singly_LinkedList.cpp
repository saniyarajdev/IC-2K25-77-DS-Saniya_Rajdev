#include <iostream>
using namespace std;

struct node {
    int d;
    node *link;
};
class LL {
    node *start; // Initialized to NULL

public:
    // Constructor to initialize start to NULL
    LL() {
        start = NULL;
    }

    void create();
    void display();
    void insert(int pos, int val);
    void count();
    void search();
    void delete_n();
};

void LL::create() {
    node *on = NULL; 
    char c;
    do {
        node *nn = new node;
        cout << "Enter data: ";
        cin >> nn->d;
        nn->link = NULL;

        if (start == NULL) {
            start = nn;
            on = nn;
        } else {
            on->link = nn;
            on = nn;
        }

        cout << "Want to add more (y/n): ";
        cin >> c;
    } while (c == 'y' || c == 'Y');
}

void LL::display() {
    if (start == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    node *t;
    cout << "Linked List elements: ";
    for (t = start; t != NULL; t = t->link) {
        cout << t->d << " -> ";
    }
    cout << "NULL" << endl;
}

void LL::insert(int pos, int val) {
    node *nn = new node;
    nn->d = val;
    nn->link = NULL;

    // Case 1: Insert at first position
    if (pos == 1) {
        nn->link = start;
        start = nn;
        cout << "Inserted " << val << " at position 1." << endl;
    } 
    // Case 2: Insert at middle or end
    else {
        node *temp = start;
        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->link;
        }

        if (temp != NULL) {
            nn->link = temp->link;
            temp->link = nn;
            cout << "Inserted " << val << " at position " << pos << "." << endl;
        } else {
            cout << "Invalid position!" << endl;
            delete nn;
        }
    }
}
void LL::delete_n() {
    if (start == NULL) {
        cout << "List is empty. Nothing to delete." << endl;
        return;
    }

    node *t, *prev = NULL;
    int num;
    t = start;

    cout << "Enter element to delete: ";
    cin >> num;

    while (t != NULL) {
        if (t->d != num) {
            prev = t;
            t = t->link;
        } else {
            if (t == start) {
                start = t->link;
            } else {
                prev->link = t->link;
            }
            delete t;
            cout << "Element deleted successfully." << endl;
            break;
        }
    }

    if (t == NULL) {
        cout << "\nData not found" << endl;
    }
}
void LL::count() {
    int total = 0;
    node *t = start;
    while (t != NULL) {
        total++;
        t = t->link;
    }
    cout << "Total number of nodes: " << total << endl;
}
void LL::search() {
    if (start == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    int target, pos = 1;
    bool found = false;
    cout << "Enter element to search: ";
    cin >> target;

    node *t = start;
    while (t != NULL) {
        if (t->d == target) {
            cout << "Element " << target << " found at position " << pos << "." << endl;
            found = true;
            break;
        }
        t = t->link;
        pos++;
    }
    if (!found) {
        cout << "Element " << target << " not found in the list." << endl;
    }
}
int main() {
    LL obj;
    int choice, val, pos;

    cout << "=== Singly Linked List System ===" << endl;
    
    while (true) {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Create List\n2. Display List\n3. Insert Element\n4. Delete Element\n5. Count Nodes\n6. Search Element\n7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 7) {
            cout << "Exiting Linked List Program..." << endl;
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
                cout << "Enter position and value to insert: ";
                cin >> pos >> val;
                obj.insert(pos, val);
                break;
            case 4:
                obj.delete_n();
                break;
            case 5:
                obj.count();
                break;
            case 6:
                obj.search();
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
    return 0;
}