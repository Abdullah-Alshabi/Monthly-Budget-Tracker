#include <iostream>
using namespace std;

struct node {
         int data;
         node *next;
    } *head;

class linked {
    public:
    linked();
    void append_front(int a); 
    void print(); 
    bool empty(); 
    int max(); 
    int min();   
    int count();  
};
linked::linked() {
    head = NULL;
}
void linked::append_front(int a) {
    node *newNode = new node;
    newNode->data = a;
    newNode->next = NULL;

    if(head == NULL) {
        head = newNode;
}
    newNode->next = head;
    head = newNode;
}
bool linked::empty() {
    if(head == NULL) {
        cout<<"The linked list is empty! "<<endl;
        return true;
    }
    return false;
}
int linked::max() {
    int max_val = head->data;
    struct node *temp = head->next;
    while (temp != NULL) {
        if (temp->data > max_val) {
            max_val = temp->data;
        }
        temp = temp->next;
    }
    return max_val;
}

int linked::min() {
     int min_val = head->data;
    struct node *temp = head->next;
    while (temp != NULL) {
        if (temp->data < min_val) {
            min_val = temp->data;
        }
        temp = temp->next;
    }
    return min_val;
}
int linked::count() {
    int x = 0;
    node *counter;
    for(counter = head; counter != NULL; counter = counter->next) {
        x++;
    }
    return x;
}
void linked::print() {
    node *temp = head;
    while(temp != NULL) { // Changed from temp->next != NULL
        cout << temp->data << "\t";
        temp = temp->next;
    }
}


int main() {
    linked ob1;
    int choice, num;
    while (true) {
        cout << "1. Append an integer number to the front of the list\n";
        cout << "2. Print the list of numbers\n";
        cout << "3. Is the list of numbers empty?\n";
        cout << "4. Print the maximum number in the list\n";
        cout << "5. Print the minimum number in the list\n";
        cout << "6. Number of nodes\n";
        cout << "7. Exit.\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the number to append: ";
                cin >> num;
                ob1.append_front(num);
                break;
            case 2:
                cout << "List of numbers: ";
                ob1.print();
                break;
            case 3:
                if (ob1.empty()) {
                    cout << "The list is empty\n";
                } else {
                    cout << "The list is not empty\n";
                }
                break;
            case 4:
                cout << "Maximum number in the list: " << ob1.max() << endl;
                break;
            case 5:
                cout << "Minimum number in the list: " << ob1.min() << endl;
                break;
            case 6:
                cout << "The numbers of node in the linked list is: " <<ob1.count() <<endl;
            case 7:
                return 0;
            default:
                cout << "Invalid choice\n";
        }
    }
}