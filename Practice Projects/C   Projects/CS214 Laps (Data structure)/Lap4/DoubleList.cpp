#include <iostream>
using namespace std;

class DoubleList { 
private: 
// private struct inside the DoubleList class.
struct node { 
node *prev;
int data; 
node* next; 
} *head; 

public: 
DoubleList(); 
void Read(int size); 
void ReversePrint(); 
void AddBefore(int loc, int num); 
void Del(int num); 
void insert(int value);
~DoubleList(); 
};
DoubleList::DoubleList() {
    head = NULL;
}
void DoubleList::insert(int value) {
    node* new_node ;
    node* last=head;
    
    
    if(last == NULL) {
        last = new node;
        last->prev=NULL;
        last->data=value;
        last->next=NULL;
        head = last;
    }
    else{
        while(last->next != NULL) {
            last = last-> next;
        }
        new_node=new node;
        new_node->prev=last;
        new_node->data=value;
        new_node->next =NULL;;
        last->next=new_node;
    }
}
void DoubleList::Read(int size) {
    cout<<"Enter "<<size<<" integers: ";
    int num;
    for(int i = 0; i < size; i++) {
        cin>>num;
        insert(num);
    }
}
void DoubleList::ReversePrint() {
    node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    while (temp->prev != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << temp->data << " ";
}
void DoubleList::Del(int num) {  // with the help of YouTube and chat gpt.
    node* current = head;
    node* prev = NULL;
    
    if (current != NULL && current->data == num) {
        head = current->next;
        if (head != NULL) 
            head->prev = NULL; 
        delete current; 
        return;
    }

    while (current != NULL && current->data != num) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        cout << "Element " << num << " not found in the list." << endl;
        return;
    }

    prev->next = current->next;
    if (current->next != NULL) 
        current->next->prev = prev; 
    delete current; 

    cout<<endl;
}

void DoubleList::AddBefore(int loc, int num) { // with the help of YouTube and chat gpt.
    node* new_node = new node;
    new_node->data = num;

    if (head == NULL || loc <= 0) {
        new_node->next = head;
        if (head != NULL)
            head->prev = new_node;
        head = new_node;
        new_node->prev = NULL;
        return;
    }
    node* current = head;
    for (int i = 0; current != NULL && i < loc - 1; i++)
        current = current->next;
    if (current == NULL) {
        new_node->prev = NULL;
        new_node->next = NULL;
        return;
    }
    new_node->prev = current->prev;
    new_node->next = current;
    current->prev = new_node;
    if (new_node->prev != NULL)
        new_node->prev->next = new_node;
    else
        head = new_node;

    cout<<endl;
}
DoubleList::~DoubleList() {
  node* current = head;
  while (current != NULL) {
    node* temp = current;
    current = current->next;
    delete temp;  
  }
}
int main() {
DoubleList ob1;
ob1.Read(4);
ob1.ReversePrint();
ob1.AddBefore(2, 88);
ob1.ReversePrint();
ob1.Del(88);
ob1.ReversePrint();
ob1.~DoubleList();
}