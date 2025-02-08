#include <iostream>
#include <cstdlib> // Include for rand() and srand()
#include <ctime>   // Include for time() to seed the random number generator
using namespace std;

struct btreenode {
    btreenode *leftchild;
    btreenode *rightchild;
    int data;
};

class btree {
private:
    btreenode *root;

    void insert(btreenode **sr, int num);
    void inorderTraversal(btreenode *sr);

public:
    btree();
    void buildtree(int num);
    void display();
};

btree::btree() {
    root = NULL;
}

void btree::buildtree(int num) {
    insert(&root, num);
}

void btree::insert(btreenode **sr, int num) {
    if (*sr == NULL) {
        *sr = new btreenode();
        (*sr)->data = num;
        (*sr)->leftchild = NULL;
        (*sr)->rightchild = NULL;
    } else {
        if (num < (*sr)->data)
            insert(&((*sr)->leftchild), num);
        else
            insert(&((*sr)->rightchild), num);
    }
}

void btree::inorderTraversal(btreenode *sr) {
    if (sr != NULL) {
        inorderTraversal(sr->leftchild);
        cout << sr->data << " ";
        inorderTraversal(sr->rightchild);
    }
}

void btree::display() {
    inorderTraversal(root);
    cout << endl;
}

int main() {
    btree ob1;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate and insert random numbers until 20
    for (int i = 0; i < 20; i++) {
        int num = rand() % 100; // Generate a random number between 0 and 99
        ob1.buildtree(num);
    }

    cout << "Binary Search Tree:" << endl;
    ob1.display();

    return 0;
}
