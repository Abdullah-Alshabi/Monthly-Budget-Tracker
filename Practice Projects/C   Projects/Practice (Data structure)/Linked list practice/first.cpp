#include <iostream>
using namespace std;

class linklist {
    private: 
        struct node {
            int data;
            node *next;
        } *p;
        int getlength(node *ptr);
        bool compare(node *p, node *q);
        void duplicate(node *ptr1, node **ptr2);
    public: 
        linklist();
        void append(int num);
        void addbeg(int num);
        void addafter(int loc, int num);
        void display();
        int count();
        void addnum(int num);
        void del(int num);
        void reverse();
        ~linklist();
        void concat(linklist &l);
        int getlength();
        bool compare(linklist &l);
        void duplicate(linklist &l);
};
linklist::linklist() {
    p = NULL;
}
void linklist::append(int num) {
    node *temp, *r;
    if(p == NULL) {
        temp = new node;
        temp->data = num;
        temp->next = NULL;
        p = temp;
    }
    else {
        temp = p;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        r = new node;
        r->data = num;
        r->next = NULL;
        temp->next = r;
    }
}
void linklist::addbeg(int num) {
    node *temp = new node;
    temp->data = num;
    temp->next = p;
    p = temp;
}
void linklist::addafter(int loc, int num) {
    node *temp, *newN;
    temp = p;
    if(p == NULL) {
        cout<<"Linked list is empty"<<endl;
    }
    for(int i = 0; i < loc; i++) {
        temp = temp->next;
    }
    if(temp == NULL) {
        cout<<"There are less then "<<loc<<" elements in the list"<<endl;
    }
    newN = new node;
    newN->data = num;
    newN->next = temp->next;
    temp->next = newN;
}
void linklist::display() {
    node *temp;
    temp = p;
    while(temp != NULL) {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
   // cout<<temp->data<<endl;
}
int linklist::count() {
    int c = 0;
    node *temp = p;
    while(temp != NULL) {
        c++;
        temp = temp->next;
    }
    return c;
}
void linklist::del(int num) {
    node *temp = p;
    node *old;
    while(temp != NULL) {
        if(temp->data == num) {
            if(temp == p)
                p = temp->next;

            else 
                old->next = temp->next;

            delete temp;
            return; 
        }
        else {
            old = temp;
            temp = temp->next;
        }
        
    }
    cout<<"The element "<<num<<" Not found";
}
void linklist::addnum(int num) {
    node *temp;
    temp = p;
    while(temp->next != NULL) {
        temp->data = temp->data + num;
        temp = temp->next;
    }
    temp->data = temp->data + num;
}
void linklist::reverse() {
    node *current = p;
    node *prev = NULL, *next = NULL;
    while(current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    p = prev;
}
void linklist::concat(linklist &l) {
   node *temp;
   if(p == NULL) {
    p = l.p;
   }
   else {
    if(l.p != NULL) {
        temp = p;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = l.p;
    }
   }
   l.p = NULL;
}
int linklist::getlength() {
    return getlength(p);
}
int linklist::getlength(node *ptr) {
    if(ptr == NULL) 
        return 0;
    else 
        return 1 + getlength(ptr->next);
}
bool linklist::compare(linklist &l) {
    return compare(p, l.p);
}
bool linklist::compare(node *p, node *q) {
    //if equal return 1, if not return 0
   if(p == NULL && q == NULL) {
    return 1;
   }
   else {
    if(p == NULL || q == NULL) 
    return 0;
    else if(p->data != q->data) 
        return 0;
    
    else compare(p->next, q->next);
   }   
}
void linklist::duplicate(linklist &l) {
    duplicate(this->p, &l.p);
}
void linklist::duplicate(node *ptr1, node **ptr2) {
    if(ptr1 != NULL) {
        *ptr2 = new node;
        (*ptr2)->data = ptr1->data;
        (*ptr2)->next = NULL;
        duplicate(ptr1->next, &((*ptr2)->next));
    }
}
linklist::~linklist() {
    node *temp;
    while(p != NULL) {
        temp = p->next;
        delete temp;
        p = temp;
    }
}
int main() {
    linklist ob, ob2;
    
    ob.append(10);
    ob.append(9);
    ob.append(8);
    ob.append(7);
    ob.duplicate(ob2);
    // ob2.append(5);
    // ob2.append(4);
    // ob2.append(3);
    // ob2.append(2);
    // ob.concat(ob2);
    // ob.addbeg(6);
    // ob.addafter(3, 22);
    ob.display();
    // ob.del(10);
    cout<<"\n----------------------\n";
    ob2.display();
    // ob.display();
    //ob.~linklist();
    // ob.reverse();
    // ob.display();
    // cout<<"\n The number of nodes in liked list using getlength function: "<<ob.getlength();
    // cout<<"\n The number of nodes in liked list using count function: "<<ob.count();
}