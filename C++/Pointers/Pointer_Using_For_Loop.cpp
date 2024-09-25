//
//  Pointer_Using_For_Loop.cpp
//  Pointers
//
//  Created by Gourav Dash on 06/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main4(){
    int A[5]={1,2,3,4,5};
    int *p=A;
    
    cout<<p<<endl;
    
    for(int i=0;i<5;i++)
    {
        cout<<*p<<endl;
        p++;
    }
    cout<<p<<endl;
    return 0;
}
