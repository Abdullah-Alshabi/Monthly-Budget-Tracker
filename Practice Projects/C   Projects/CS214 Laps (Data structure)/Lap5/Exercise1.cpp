#include <iostream>
using namespace std;

const int SIZE = 5;
class stack {
    private:
        int stack[SIZE], topIndex = -1;
    public:
        void push(int value);
        bool is_full();
        int pop();
        bool is_empty();
        int top();
        int size();
        void display();

};
void stack::push(int value) {
    if(is_full()) {
        cout<<"Stack is full!."<<endl;
        return;
    }
    if(value %2 != 0) {
       value++;
    }
    topIndex++;
    stack[topIndex] = value;
    cout<<"Pushed: "<<value<<endl;
}
bool stack::is_full() {
    return topIndex == SIZE - 1;
}
int stack::pop() {
      if(is_empty()) {
        cout<<"Stack is empty!"<<endl;
        return -1;
    }
    return stack[topIndex--];
}
bool stack::is_empty() {
    return topIndex == -1;
}
int stack::top() {
    if (is_empty()) {
        cout << "Stack is empty." << endl;
        return -1;
    }
     return stack[topIndex];
}
int stack::size() {
    return topIndex + 1;
}
void stack::display() {
      if(is_empty()) {
        cout<<"Stack is empty!"<<endl;
        return;
    }
    else {
        for(int i = topIndex; i >= 0; i--) {
            cout<<stack[i]<<"\t";
        }
    }
}

int main() {
     stack s;
    int choice;
    int value;

    do {
        cout << "\nChoose an option:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Top" << endl;
        cout << "4. Size" << endl;
        cout << "5. Display" << endl;
        cout << "-1. Quit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                cout << "Top element: " << s.top() << endl;
                break;
            case 4:
                cout << "Size of stack: " << s.size() << endl;
                break;
            case 5:
                s.display();
                break;
            case -1:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != -1);
    
    return 0;
}