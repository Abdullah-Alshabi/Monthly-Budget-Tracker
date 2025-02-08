#include <iostream>
using namespace std;

struct List {
    int info;
    struct List *next;
} *FirstNode, *counter, *temp;


void append_front(int num) {
     List *newNode = new List;
    newNode->info = num;
    newNode->next = NULL;

    if(FirstNode == NULL) { //check if it is embty list
        FirstNode = newNode;
    }
    else {
        newNode->next = FirstNode; //link new node with current first node
        FirstNode = newNode; //new node will be as the first node
    }
}
void print() {
    int x = 0;
    for (counter = FirstNode; counter != NULL; counter = counter->next){
            x++;
    }
    
    cout << x << "\t"; 
}
bool isEmpty() {
    if (FirstNode == NULL) {
        return true; 
    } else {
        return false; 
    }
}
int max() {
    int max_val = FirstNode->info;
    struct List *temp = FirstNode->next;
    while (temp != NULL) {
        if (temp->info > max_val) {
            max_val = temp->info;
        }
        temp = temp->next;
    }
    return max_val;
 }
int min() {
     int min_val = FirstNode->info;
    struct List *temp = FirstNode->next;
    while (temp != NULL) {
        if (temp->info < min_val) {
            min_val = temp->info;
        }
        temp = temp->next;
    }
    return min_val;
}

int main() {
    int choice, num;
    while (true) {
        cout << "1. Append an integer number to the front of the list\n";
        cout << "2. Print the list of numbers\n";
        cout << "3. Is the list of numbers empty?\n";
        cout << "4. Print the maximum number in the list\n";
        cout << "5. Print the minimum number in the list\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the number to append: ";
                cin >> num;
                append_front(num);
                break;
            case 2:
                cout << "List of numbers: ";
                print();
                break;
            case 3:
                if (isEmpty()) {
                    cout << "The list is empty\n";
                } else {
                    cout << "The list is not empty\n";
                }
                break;
            case 4:
                cout << "Maximum number in the list: " << max() << endl;
                break;
            case 5:
                cout << "Minimum number in the list: " << min() << endl;
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid choice\n";
        }
    }
}
