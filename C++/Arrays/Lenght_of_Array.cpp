//
//  main.cpp
//  Arrays
//
//  Created by Gourav Dash on 01/08/24.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main1() {
    
    int arr[5]={1,2,3,4,5};
//        int length=sizeof(arr)/sizeof(arr[0]);
    
    //this command is used to find the number of elements present in the array... through the index value... the size if right now 20/4...


//
//        for (int i=0;i<length;i++){
//    
//            cout<<arr[i]<<endl;
//        }
//        return 0;
    
    //alternate way of doing the same thing...
    
    for (int i:arr){
        cout<<i<<endl;
    }
    return 0;
}
