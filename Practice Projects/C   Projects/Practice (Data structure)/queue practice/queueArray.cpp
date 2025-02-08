#include <iostream>
using namespace std;
int const MAX = 10;

class queue {
    private:
        int arr[MAX];
        int front, rear;
    public:
        queue();
        void add(int num);
        int del();
        void display();
};
queue::queue() {
    front = rear = -1;
}
void queue::add(int num) {
    if(rear == MAX - 1){
        cout<<"Queue is full!"<<endl;
        return;
    }
    rear++;
    arr[rear] = num;
    if(front == -1) {
        front++;
    }
}
int queue::del() {
    if(front == -1) {
        cout<<"Queue is empty!"<<endl;
        return 0;
    }
    int n = arr[front];
    arr[front] = 0;
    if(front == rear) {
        front = rear = -1;
    }
    else 
        front++;
    return n;
}
void queue::display() {
    for(int i = front; i <= rear; i++) {
        cout<<arr[i]<<"\t";
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