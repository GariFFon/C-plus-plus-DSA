//
//  Product_of_Two_Matrices.cpp
//  Arrays
//
//  Created by Gourav Dash on 14/09/24.
//
#include <iostream>
using namespace std;

void product(int arr1[][100], int arr2[][100], int row1, int col1, int row2, int col2) {
    int arr3[100][100] = {0};

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            int sum = 0;
            for (int k = 0; k < col1; k++) {
                sum += arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = sum;
        }
    }

    
    cout << "Product of the matrices:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int row1, col1, row2, col2;
    
    cin >> row1 >> col1;
    int arr1[100][100];
    
    cout << "Enter first matrix:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> arr1[i][j];
        }
    }
    
    cin >> row2 >> col2;
    int arr2[100][100];
    
    // Check if matrix multiplication is possible
    if (col1 != row2) {
        cout << "Matrix multiplication is not possible!" << endl;
        return 1;
    }

    cout << "Enter second matrix:" << endl;
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cin >> arr2[i][j];
        }
    }
    
    product(arr1, arr2, row1, col1, row2, col2);

    return 0;
}


