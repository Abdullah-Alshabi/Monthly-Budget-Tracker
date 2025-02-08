#include <iostream>
using namespace std;
int const MAX = 10;

class stack {
    private: 
        int arr[MAX];
        int top;
    public:
        stack();
        void push(int num);
        int pop();
        void display();
};
stack::stack() {
    top = -1;
}
void stack::push(int num) {
    if(top == MAX-1) {
        cout<<"Stack is full!"<<endl;
        return;
    }
    top++;
    arr[top] = num;
}
int stack::pop() {
    if(top == -1) {
        cout<<"Stack is empty!"<<endl;
        return 0;
    }
    int data = top;
    top--;
    return data;
}
void stack::display() {
    for(int i = top; i >= 0; i--) {
        cout<<arr[i]<<"\t";
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