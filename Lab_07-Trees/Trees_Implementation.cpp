#include <iostream>
using namespace std;
// 1.
struct node {
    int d;          // Data
    node *l, *r;    // Left and Right child pointers
};

// 2. Class definition for Binary Search Tree
class BST {
    node *root;

    // Private helper functions for recursion
    node* delete_e(int v, node *ro);
    void pre_order(node *t2);
    void in_order(node *t2);
    void post_order(node *t2);

public:
    BST() { 
        root = NULL; 
    }
    
    void insert(int x);
    void traverse();
    void delete_val(); // User-facing delete interface
};

// 3. Iterative Insertion Function
void BST::insert(int x) {
    node *nn = new node;
    nn->d = x;
    nn->l = NULL;
    nn->r = NULL;

    if (root == NULL) {
        root = nn;
    } else {
        node *t = root;
        node *prev = NULL;

        while (t != NULL) {
            prev = t;
            if (x > t->d) {
                t = t->r;
            } else {
                t = t->l;
            }
        }

        if (prev->d > x) {
            prev->l = nn;
        } else {
            prev->r = nn;
        }
    }
}

// 4. User-Facing Delete Helper Function 
void BST::delete_val() {
    int v;
    cout << "Enter value to delete: ";
    cin >> v;
    root = delete_e(v, root); 
}

// 5. Recursive Deletion Function
node* BST::delete_e(int v, node *ro) {
    if (ro == NULL) {
        return NULL;
    }
    else if (v > ro->d) {
        ro->r = delete_e(v, ro->r);
        return ro;
    }
    else if (v < ro->d) {
        ro->l = delete_e(v, ro->l);
        return ro;
    }
    else {
        // Node found (v == ro->d)
        if (ro->l == NULL) {
            node *t = ro->r;
            delete ro;
            return t;
        }
        else if (ro->r == NULL) {
            node *t = ro->l;
            delete ro;
            return t;
        }
        else {
            // Node has two children
            node *t = ro->r;
            while (t->l != NULL) {
                t = t->l;
            }
            ro->d = t->d;
            ro->r = delete_e(t->d, ro->r);
            return ro;
        }
    }
}

// 6. Traversal Manager Function
void BST::traverse() {
    if (root == NULL) {
        cout << "\nTree is empty!";
        return;
    }
    node *t = root;
    
    cout << "\nPreorder: ";
    pre_order(t);
    
    cout << "\nInorder: ";
    in_order(t);
    
    cout << "\nPostorder: ";
    post_order(t);
    cout << endl;
}

// 7. Recursive Pre-order Traversal (Root -> Left -> Right)
void BST::pre_order(node *t2) {
    if (t2 != NULL) {
        cout << t2->d << " ";
        pre_order(t2->l);
        pre_order(t2->r);
    }
}

// 8. Recursive In-order Traversal (Left -> Root -> Right)
void BST::in_order(node *t2) {
    if (t2 != NULL) {
        in_order(t2->l);
        cout << t2->d << " ";
        in_order(t2->r);
    }
}

// 9. Recursive Post-order Traversal (Left -> Right -> Root)
void BST::post_order(node *t2) {
    if (t2 != NULL) {
        post_order(t2->l);
        post_order(t2->r);
        cout << t2->d << " ";
    }
}

// 10.Main Function
int main() {
    BST tree;
    int choice, val;

    while (true) {
        cout << "\n--- BINARY SEARCH TREE MENU ---";
        cout << "\n1. Insert Element";
        cout << "\n2. Delete Element";
        cout << "\n3. Display Traversals";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> val;
                tree.insert(val);
                break;
            case 2:
                tree.delete_val();
                break;
            case 3:
                tree.traverse();
                break;
            case 4:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Try again.";
        }
    }
    return 0;
}