//
//  Pointer_Arithematic.cpp
//  Pointers
//
//  Created by Gourav Dash on 05/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main3(){
    
    int A[5]={1,2,3,4,5};
    int *p=A;
    
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;
    
    return 0;
}
