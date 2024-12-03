#include <iostream>
using namespace std;

int main() {
    const int size = 3;
    int matrix1[size][size];
    int matrix2[size][size];


    cout << "Input values for Matrix 1 (3x3):" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "Input value for element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j]; 
        }
    }


    cout << "\nInput values for Matrix 2 (3x3):" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "Input value for element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j]; 
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

    return 0;
}