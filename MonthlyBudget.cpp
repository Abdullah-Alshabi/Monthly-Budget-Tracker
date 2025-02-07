#include <iostream>
#include <iomanip>
using namespace std;

class MonthlyBudget {
private:
    struct node {
        double amount;
        string category;
        node* next;
    }*head;

    double income, total, remaining;

public:
    MonthlyBudget() {
        head = NULL;
        income = 0;
        int c;
        cout << "Enter your income:" << endl;
        cin >> income;
        
        do {
            cout << "Enter 1 for add expense" << endl
                 << "2 for modify your income" << endl
                 << "3 for display" << endl
                 << "-1 for exit:" << endl;
            cin >> c;

            if(c == 1) {
                this->AddE();
            }
            else if(c == 2) {
                cout << "Enter your income:" << endl;
                int p;
                cin >> p;
                income = 0;
                income += p;
            }
            else if(c == 3) {
                this->display();
            }
            else if(c == -1) {
                cout << "You end the program!" << endl;
            }
            else {
                cout << "You entered the wrong number!" << endl;
            }
        } while(c != -1);
    }

    void AddE() {
        int num, choose;
        string str;
        cout << "1 For Modify" << endl;
        cout << "2 For Add" << endl;
        cin >> choose;
        
        if (choose == 1) {
            node* temp = head;
            bool m = false;

            cout << "Enter expense category to Modify: ";
            cin >> str;
            cout << "Enter expense amount to Modify: $";
            cin >> num;

            if (temp == NULL) {
                cout << "There is no Expense to Modify" << endl;
                return;
            }
            else {
                while (temp != NULL) {
                    if (temp->category == str) {
                        total -= temp->amount;
                        total += num;
                        remaining = income - total;
                        temp->amount = num;
                        m = true;
                        cout << "Expense modified successfully!" << endl;
                        break;
                    }
                    temp = temp->next;
                }
                if (!m)
                    cout << "Expense category not found." << endl;
            }
        }

        if (choose == 2) {
            cout << "Enter expense category to Add: ";
            cin >> str;
            cout << "Enter expense amount to Add: $";
            cin >> num;

            node* temp, *r;
            if (head == NULL) {
                temp = new node;
                temp->amount = num;
                temp->category = str;
                temp->next = NULL;
                head = temp;
                total += num;
                remaining = income - total;
                cout << "Expense added successfully!" << endl;
                return;
            }
            else {
                temp = head;
                while (temp->next != NULL)
                    temp = temp->next;
            }

            remaining = income - total;
            if (num > remaining) {
                cout << "Can't add Category: " << str << endl;
                cout << "Amount: $" << num << endl;
                cout << "There is not enough budget" << endl;
                return;
            }

            r = new node;
            r->amount = num;
            r->category = str;
            r->next = NULL;
            temp->next = r;
            total += num;
            remaining = income - total;
            cout << "Expense added successfully!" << endl;
        }

        if (remaining <= income / 5)
            cout << "Low budget: " << remaining << endl;
    }

    void display() {
        cout << "Monthly Budget Summary" << endl;
        cout << "Income: $" << fixed << setprecision(2) << income << endl;
        cout << "Expenses:" << endl;
        cout << setw(15) << left << "Category" << setw(10) << right << "Amount" << endl;
        node* temp = head;
        total = 0;
        
        while (temp != nullptr) {
            cout << setw(15) << left << temp->category << setw(10) << right << temp->amount << endl;
            total += temp->amount;
            temp = temp->next;
        }

        cout << "Total Expenses: $" << fixed << setprecision(2) << total << endl;
        remaining = income - total;
        cout << "Remaining Budget: $" << fixed << setprecision(2) << remaining << endl;
    }
};

int main() {
    MonthlyBudget m = MonthlyBudget();
    return 0;
}
