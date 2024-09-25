//
//  Maximum_Element_In_Array.cpp
//  Arrays
//
//  Created by Gourav Dash on 02/08/24.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main3() {
    int A[]={1,2,99,4,5};
    int max=0;
    
    for (int i:A){
        if (A[i] > max){
            max=A[i];
        }
    }
    cout<<"The Maximum Element is: "<<max<<endl;
    return 0;
}
