#include <iostream>
//#include <climits> // For INT_MIN
using namespace std;

struct List {
    int info;
    struct List *next;
};

struct List *FirstNode;
struct List *counter, *temp;

void append_front(int num) {
    struct List *newNode = new List;
    newNode->info = num;
    newNode->next = NULL;

    if(FirstNode == NULL) { 
        FirstNode = newNode;
    }
    else {
        newNode->next = FirstNode; //link new node with current first node
        FirstNode = newNode; //new node will be as the first node
    }
}

void append_end(int num) {
    struct List *newNode = new List;
    newNode->info = num;
    newNode->next = NULL;

    if (FirstNode == NULL) { // If list is empty, newNode will be the first node
        FirstNode = newNode;
    } else {
        struct List *temp = FirstNode;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void print() {
    for (counter = FirstNode; counter != NULL; counter = counter->next) 
        cout << counter->info << "\t"; 
    cout << endl;
}

bool isEmpty() {
    if (FirstNode == NULL) {
        return true; 
    } else {
        return false; 
    }
}

void read_list(int size) {
    int num;
    for (int i = 0; i < size; ++i) {
        cout << "Enter number " << i+1 << ": ";
        cin >> num;
        append_end(num);
    }
}

struct List * find_max() {
    if (isEmpty()) {
        return NULL;
    }

    int max_val = INT_MIN;
    struct List *max_node = NULL;
    struct List *temp = FirstNode;

    while (temp != NULL) {
        if (temp->info > max_val) {
            max_val = temp->info;
            max_node = temp;
        }
        temp = temp->next;
    }
    return max_node;
}

void append_BET(struct List *max_loc, int num) {
    if (max_loc == NULL) {
        cout << "The list is empty.\n";
        return;
    }

    struct List *newNode = new List;
    newNode->info = num;
    newNode->next = max_loc->next;
    max_loc->next = newNode;
}

void delete_max(struct List *max_loc) {
    if (max_loc == NULL || max_loc->next == NULL) {
        return;
    }

    struct List *temp = max_loc->next;
    max_loc->next = temp->next;
    delete temp;
}

int min() {
    if (isEmpty()) {
        cout << "The list is empty\n";
        return INT_MIN; 
    }

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

int main() { //The test from chatgpt 
    int choice, num, size;
    while (true) {
        cout << "1. Append an integer number to the front of the list\n";
        cout << "2. Print the list of numbers\n";
        cout << "3. Is the list of numbers empty?\n";
        cout << "4. Read specific number of integers and insert them at the end of the list\n";
        cout << "5. Print the maximum number in the list\n";
        cout << "6. Print the address of the node containing the maximum number\n";
        cout << "7. Append an integer number after the maximum number\n";
        cout << "8. Delete the maximum number from the list\n";
        cout << "9. Print the minimum number in the list\n";
        cout << "10. Exit\n";
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
                cout << "Enter the size of the list: ";
                cin >> size;
                read_list(size);
                break;
            case 5:
                {
                    struct List *max_node = find_max();
                    if (max_node != NULL) {
                        cout << "Maximum number in the list: " << max_node->info << endl;
                    } else {
                        cout << "The list is empty\n";
                    }
                }
                break;
            case 6:
                {
                    struct List *max_node = find_max();
                    if (max_node != NULL) {
                        cout << "Address of the node containing the maximum number: " << max_node << endl;
                    } else {
                        cout << "The list is empty\n";
                    }
                }
                break;
            case 7:
                {
                    struct List *max_node = find_max();
                    if (max_node != NULL) {
                        cout << "Enter the number to append after the maximum: ";
                        cin >> num;
                        append_BET(max_node, num);
                    } else {
                        cout << "The list is empty\n";
                    }
                }
                break;
            case 8:
                {
                    struct List *max_node = find_max();
                    if (max_node != NULL) {
                        delete_max(max_node);
                        cout << "Maximum number deleted from the list\n";
                    } else {
                        cout << "The list is empty\n";
                    }
                }
                break;
            case 9:
                if (!isEmpty()) {
                    cout << "Minimum number in the list: " << min() << endl;
                } else {
                    cout << "The list is empty\n";
                }
                break;
            case 10:
                return 0;
            default:
                cout << "Invalid choice\n";
        }
    }
}
