#include <iostream>
using namespace std;

struct node {
    node *leftchild;
    int data;
    node *rightchild;
};

class tree {
    private:
    node *rootPointer;
    void insert(node **sr, int);
    void inorder(node *sr);
    void preorder(node *sr);
    void postorder(node *sr);
    bool search(node *sr, int);
    public:
    tree();
    void buildtree(int num);
    void display();
    bool searchtree(int);
};
tree::tree() {
    rootPointer = NULL;
}
void tree::buildtree(int num) {
    insert(&rootPointer, num);
}
void tree::insert(node **sr, int num) {
    if(*sr == NULL) { //tree is empty
        *sr = new node;
        (*sr)->data = num;
        (*sr)->leftchild = NULL;
        (*sr)->rightchild = NULL;
    }
    else {
        if(num < (*sr)->data) 
            insert(&(*sr)->leftchild, num);
        
        else 
            insert(&(*sr)->rightchild, num);
    }
}
void tree::inorder(node *sr) {
    if(sr != NULL) {
        inorder(sr->leftchild);
        cout<<sr->data<<"\t";
        inorder(sr->rightchild);
    }
}
void tree::preorder(node *sr) {
    if(sr != NULL) {
        cout<<sr->data<<"\t";
        preorder(sr->leftchild);
        preorder(sr->rightchild);
    }
}
void tree::postorder(node *sr) {
    if(sr != NULL) {
        postorder(sr->leftchild);
        postorder(sr->rightchild);
        cout<<sr->data<<"\t";
    }
}
void tree::display() {
    int n;
    cout<<"In which approach do you want to print the tree? "<<endl<<"prees 1 for INORDER"<<endl<<"prees 2 for PREORDER"<<endl<<"prees 3 for POSTORDER"<<endl;
    cin>>n;
    if(n == 1) {
        inorder(rootPointer);
    }
    if(n == 2) {
        preorder(rootPointer);
    }
    if(n == 3) {
        postorder(rootPointer);
    }
    else{
        cout<<"invalid input";

    }
}
bool tree::searchtree(int num) {
    bool flag;
    flag = search(rootPointer, num);
    return flag;
}
bool tree::search(node *sr, int num) {
    while(sr != NULL) { //found number
        if(sr->data == num) { //if it is root
            return true;
        }
        else if(num < sr->data) {
            sr = sr->leftchild;
        }
        else 
            sr = sr->rightchild;
    }
    return false;
}

int main() {
    tree ob;
    ob.buildtree(20);
    ob.buildtree(14);
    ob.buildtree(41);
    ob.buildtree(22);
    ob.buildtree(7);
    ob.buildtree(10);
    ob.buildtree(17);
    ob.display();
}