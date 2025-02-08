#include <iostream>
using namespace std;

class BinarySearchTree {
public:
    struct Node {
        int data;
        Node* left;
        Node* right;
    }*root;

    BinarySearchTree() {
        root = NULL;
    }

    ~BinarySearchTree() {
        deleteTree(root);
    }

    // pass by reference to root
    void attach(Node*& currentNode, int element) {
        if (currentNode == NULL) {
            currentNode = new Node;
            currentNode->data = element;
            currentNode->left = currentNode->right = NULL;
        } else {
            if (element < currentNode->data) {
                attach(currentNode->left, element);
            } else {
                attach(currentNode->right, element);
            }
        }
    }

    void inOrderTraversal(Node* p) {
        if (p != NULL) {
            inOrderTraversal(p->left);
            cout << p->data << " ";
            inOrderTraversal(p->right);
        }
    }

    void preOrderTraversal(Node* p) {
        if (p != NULL) {
            cout << p->data << " ";
            preOrderTraversal(p->left);
            preOrderTraversal(p->right);
        }
    }

    void postOrderTraversal(Node* p) {
        if (p != NULL) {
            postOrderTraversal(p->left);
            postOrderTraversal(p->right);
            cout << p->data << " ";
        }
    }

    void deleteTree(Node* node) {
        if (node != NULL) {
            deleteTree(node->left);
            deleteTree(node->right);
            delete node;
        }
    }

    void deleteNode(Node*& currentNode, int key) {
        if (currentNode == NULL) return;

        if (key < currentNode->data) {
            deleteNode(currentNode->left, key);
        } else if (key > currentNode->data) {
            deleteNode(currentNode->right, key);
        } else {
            if (currentNode->left == NULL) {
                Node* temp = currentNode->right;
                delete currentNode;
                currentNode = temp;
            } else if (currentNode->right == NULL) {
                Node* temp = currentNode->left;
                delete currentNode;
                currentNode = temp;
            } else {
                Node* temp = minValueNode(currentNode->right);
                currentNode->data = temp->data;
                deleteNode(currentNode->right, temp->data);
            }
        }
    }

    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left != NULL) {
            current = current->left;
        }
        return current;
    }
};

int main() {
    BinarySearchTree bst;
    bst.attach(bst.root, 50);
    bst.attach(bst.root, 30);
    bst.attach(bst.root, 70);
    bst.attach(bst.root, 20);
    bst.attach(bst.root, 40);
    bst.attach(bst.root, 60);
    bst.attach(bst.root, 80);

    // Perform different traversals
    cout << "In-order traversal: ";
    bst.inOrderTraversal(bst.root);
    cout << endl;

    cout << "Pre-order traversal: ";
    bst.preOrderTraversal(bst.root);
    cout << endl;

    cout << "Post-order traversal: ";
    bst.postOrderTraversal(bst.root);
    cout << endl;

    cout << "\n\nExtra Credit: \n\n";
    bst.deleteNode(bst.root, 30);
    cout << "In-order after removing (30) is: ";
    bst.inOrderTraversal(bst.root);
    cout << endl;

    cout << "Pre-order after removing (30) is: ";
    bst.preOrderTraversal(bst.root);
    cout << endl;

    cout << "Post-order after removing (30) is: ";
    bst.postOrderTraversal(bst.root);
    cout << endl;

    cout << "\n\n";
    return 0;
}
