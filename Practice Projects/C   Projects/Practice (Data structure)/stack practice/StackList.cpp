#include <iostream>
using namespace std;

class stack {
    private:
    struct node {
        int data;
        node *next;
    } *top;
    public:
        stack();
        void push(int num);
        int pop();
        void display();
        ~stack();
};
stack::stack() {
    top = NULL;
}
void stack::push(int num) {
    node *temp = new node;
    if(temp == NULL) { //memory is full
        cout<<"Stack os full"<<endl;
        return;
    }
    temp->data = num;
    temp->next = top;
    top = temp;
}
int stack::pop() {
    if(top == NULL) {
        cout<<"Stack is empty"<<endl;
        return 0;
    }
    node *temp = new node;
    temp = top;
    int n = temp->data;
    top = top->next;
    delete temp; 
    return n;
}
void stack::display() {
    node* temp = top;
    while(temp != NULL) {
        cout<<temp->data<<"\t";
        temp = temp-> next;
    }
}
stack::~stack() {
    node* temp;
    while(temp->next != NULL) {
        temp = top;
        top = top->next;
        delete temp;
    }
}
int main() {
    stack ob;
    ob.push(1);
    ob.push(2);
    ob.push(3);
    ob.push(4);
    ob.push(5);
    ob.display();
    ob.pop();
    ob.pop();
    cout<<endl;
    ob.display();
}
