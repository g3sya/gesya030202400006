#include <iostream>
using namespace std;

int main() {
    const int size = 4; 
    int matrix1[size][size];
    int matrix2[size][size];
    int sumOfMatrices[size][size]; 

 
    cout << "Type values for Matrix 1 (4x4):" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "Type value for element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j]; 
        }
    }


    cout << "\nType values for Matrix 2 (4x4):" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "Type value for element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j]; 
        }
    }


    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            sumOfMatrices[i][j] = matrix1[i][j] + matrix2[i][j]; 
        }
    }

    cout << "\nMatrix 1:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

 
    cout << "\nMatrix 2:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix2[i][j] << " "; 
        }
        cout << endl; 
    }

    cout << "\nSum of Matrices:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << sumOfMatrices[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}