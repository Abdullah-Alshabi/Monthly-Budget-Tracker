#include <iostream>
using namespace std;

class linklist {
    private:
        struct dnode{
            int data;
            dnode *next;
            dnode *prev;
        } *p;
    public: 
        linklist();
        void append(int num);
        void addbeg(int num);
        void addafter(int loc, int num);
        void display();
        void del(int num);
        ~linklist();
};
linklist::linklist() {
    p = NULL;
}
void linklist::append(int num) {
    dnode *temp = p, *r;
    if(temp == NULL) {
        temp = new dnode;
        temp->data = num;
        temp->prev = NULL;
        temp->next = NULL;
        p = temp;
    }
    else {
        while(temp->next != NULL) 
            temp = temp->next;
        r = new dnode;
        r->data = num;
        r->prev = temp;
        r->next = NULL;
        temp->next = r;
    }    
}
void linklist::addbeg(int num) {
    dnode *temp = new dnode;
    temp->data = num;
    temp->prev = NULL;
    temp->next = p;
    p->prev = temp;
    p = temp;
}
void linklist::addafter(int loc, int num) {
    dnode *r = p, *temp;
    for(int i = 0; i < loc; i++) {
        r = r->next;
        if(r == NULL) {
            cout<<"there is less than "<<loc<<" elements"<<endl;
            return;
        }
    }
    r = r->prev;
    temp = new dnode;
    temp->data = num;
    temp->prev = r;
    temp->next = r->next;
    temp->next->prev = temp;
    r->next = temp;
}
void linklist::del(int num) {
    dnode *q = p;
    while(q != NULL) {
        if(q->data == num) { //found the number to be deleted
            if(p == q) { //first node
                p = p->next;
                p->prev = NULL;
            }
            else if(q->next == NULL) { //last node
                q->prev->next = NULL;
            }
            else { //any where
                q->prev->next = q->next;
                q->next->prev = q->prev;
            }
            delete q;
        }
        q = q->next;
    }
    cout<<"The element "<<num<<" not found";
}
void linklist::display() {
    dnode *temp = p;
    while(temp != NULL) {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
}
linklist::~linklist() {
    dnode *temp;
    while(p != NULL) {
        temp = p;
        p = p->next;
        delete temp;
    }

}

int main() {
    linklist ob;    
    ob.append(19);
    ob.addbeg(5);
    ob.addbeg(7);
    ob.addbeg(1);
    ob.append(8);
    ob.addafter(4, 99);
    ob.display();
}

