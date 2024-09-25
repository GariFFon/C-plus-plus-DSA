//
//  2D_Array_Addition_Of_Matrix.cpp
//  Arrays
//
//  Created by Gourav Dash on 05/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main7(){
    
    int A[2][3]={{2,5,9},{4,3,6}};
    int B[2][3]={{6,3,4},{9,5,2}};
    int C[2][3];
    
    for (int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    
    for (int k=0;k<2;k++){
        for (int o=0;o<3;o++){
            cout<<C[k][o]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
