#include <iostream>
#include <cmath>
using namespace std;

void even(int *array, int size) {
    cout << "Even numbers in the array: ";
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            cout << array[i] << " ";
        }
    }
    cout << endl;
}

void odd(int *array, int size) {
    cout << "Odd numbers in the array: ";
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 != 0) {
            cout << array[i] << " ";
        }
    }
    cout << endl;
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void printPrimes(int *array, int size) {
    cout << "Prime numbers in the array: ";
    for (int i = 0; i < size; i++) {
        if (isPrime(array[i])) {
            cout << array[i] << " ";
        }
    }
    cout << endl;
}

bool isSquare(int num) {
    int root = sqrt(num);
    return (root * root == num);
}

void printSquares(int *array, int size) {
    cout << "Complete square numbers in the array: ";
    for (int i = 0; i < size; i++) {
        if (isSquare(array[i])) {
            cout << array[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the size: ";
    cin >> size;

    int *array = new int[size];

    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    cout << "The elements of the array are:" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << endl;
    }

    even(array, size);
    odd(array, size);
    printPrimes(array, size);
    printSquares(array, size);

    delete[] array;

    return 0;
}
