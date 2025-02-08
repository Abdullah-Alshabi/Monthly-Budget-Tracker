#include <iostream>
using namespace std;

int main() {
    int rows;
    int cols;

    cout<<"Enter the number of rows: "<<endl;
    cin>>rows;
    cout<<"Enter the number of columns: "<<endl;
    cin>>cols;
    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    cout<<"First Matrix Input: "<<endl;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cout << "matrix1[" << i << "][" << j << "] = ";
            cin>>matrix1[i][j];
        }
    }
   
    cout<<"Second Matrix Input: "<<endl;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cout << "matrix2[" << i << "][" << j << "] = "; 
            cin>>matrix2[i][j];
        }
    }
    cout<<"Adding Matrices.."<<endl;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    //result matrix
    cout<<"The resulting matrix is: "<<endl;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cout<<result[i][j];
            cout<<"\t";
        }
        cout<<"\n";
    }

    //even rows in result matrix
   cout << "Even rows in the resulting matrix: " << endl;
    for (int i = 1; i < rows; i += 2) { // Row indices start from 0
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    // odd columns in result matrix
    cout << "Odd columns in the resulting matrix: " << endl;
    for (int j = 0; j < cols; j += 2) { // Column indices start from 0
        for (int i = 0; i < rows; i++) {
            cout << result[i][j] << "\n";
        }
        cout << endl;
    }
    int largest = result[0][0];
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            if(result[i][j] >largest) {
                largest = result[i][j];
            }
        }
    }
    cout<<"The largest number in the result matrix: "<<largest;
    }


