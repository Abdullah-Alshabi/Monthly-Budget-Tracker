#include <iostream>
using namespace std;

class stack {
private:
    struct node {
        int data;
        node *link;
    } *top;

public:
    stack();
    void push(int value);
    int pop();
    void display();
    int topElement();
    int size();
};

stack::stack() {
    top = NULL;
}

void stack::push(int value) {
    node *temp;
    temp = new node;
    if (temp == NULL) {
        cout << "Stack is full!" << endl;
        return;
    }
    if(value %2 != 0) {
       value++;
    }
    temp->data = value;
    temp->link = top;
    top = temp;
    cout<<"Pushed: "<<value<<endl;
}

int stack::pop() {
    if (top == NULL) {
        cout << "Stack is empty!" << endl;
        return -1; // Indicate failure
    }
    node *temp;
    int item;
    temp = top;
    item = temp->data;
    top = top->link;
    delete temp;
    return item;
}

void stack::display() {
    if (top == NULL) {
        cout << "Stack is empty!" << endl;
        return;
    }
    cout << "Stack elements: ";
    node *current = top;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->link;
    }
    cout << endl;
}

int stack::topElement() {
    if (top == NULL) {
        cout << "Stack is empty!" << endl;
        return -1; // Indicate failure
    }
    return top->data;
}

int stack::size() {
    int count = 0;
    node *current = top;
    while (current != NULL) {
        count++;
        current = current->link;
    }
    return count;
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
                cout << "Top element: " << s.topElement() << endl;
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
