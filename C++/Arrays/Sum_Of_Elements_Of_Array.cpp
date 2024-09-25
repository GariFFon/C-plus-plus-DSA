//
//  Sum_Of_Elements_Of_Array.cpp
//  Arrays
//
//  Created by Gourav Dash on 02/08/24.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main2() {
    
    int arr[5]={1,2,3,4,5};
    int sum =0;
    for (int i:arr){
        cout<<i<<endl;
        sum=sum+i;
    }
    cout<<"The Sum is: "<<sum<<endl;
    return 0;
}
