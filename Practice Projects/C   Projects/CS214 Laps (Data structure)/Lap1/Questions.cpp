#include <iostream>
#include <string>
using namespace std;

struct student {
    string fname;
    string lname;
    int id;
    float gpa;
};

int main() {
    int size;
  
    cout<<"Enter the size number: ";
    cin>>size;

    student *array = new student[size];

    //input
    for(int i = 0; i < size; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;

        cout<<"First name: ";
        cin>>array[i].fname;

        cout<<"Last name: ";
        cin>>array[i].lname;

        cout<<"ID: ";
        cin>>array[i].id;

        cout<<"GPA: ";
        cin>>array[i].gpa; 
    }

    //output
    for(int i = 0; i < size; i++) {
        cout << "Student " << i + 1 << ":\n";
        cout<<"First name: "<<array[i].fname<<endl;
        cout<<"Last name: "<<array[i].lname<<endl;
        cout<<"ID: "<<array[i].id<<endl;
        cout<<"GPA: "<<array[i].gpa<<endl;
    }

    delete[] array;
    return 0;
}