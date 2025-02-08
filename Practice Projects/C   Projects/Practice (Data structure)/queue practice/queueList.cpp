#include <iostream>
using namespace std;

class queue {
    private: 
        struct node {
            int data; 
            node *next;
        } *front, *rear;
    
    public: 
        queue();
        void add(int num);
        int del();
        void display();
        ~queue();
};
queue::queue() {
    front = rear = NULL;
}
void queue::add(int num) {
    node *temp = new node;
    temp->data = num;
    temp->next = NULL;
    if(front == NULL) {
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = rear->next; 
}
int queue::del() {
    if(front == NULL) {
        cout<<"Queue is empty!"<<endl;
        return 0;
    }
    node *temp = front;
    int num = front->data;
    front = front->next;
    delete temp;
    return num;
}
void queue::display() {
    node *temp = front;
    while(temp != NULL) {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
}
queue::~queue() {
    node *temp;
    if(front == NULL) {
        return;
    }
    while(front != NULL) {
        temp = front;
        front = front->next;
        delete temp;
    }
}
int main() {
    queue ob;
    ob.add(5);
    ob.add(4);
    ob.add(3);
    ob.add(2);
    ob.add(1);
    ob.display();
    ob.del();
    cout<<endl;
    ob.display();
}