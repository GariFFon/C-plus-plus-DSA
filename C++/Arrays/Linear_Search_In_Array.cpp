//
//  Linear_Search_In_Array.cpp
//  Arrays
//
//  Created by Gourav Dash on 02/08/24.
//

#include <stdio.h>
#include <iostream>

using namespace std;

//int main4(){
//    int A[]={1,2,3,4,5};
//    int n;
//    cout<<"Enter the Target: ";
//    cin>>n;
//    int target = n;
////    int length = sizeof(A)/sizeof(A[0]);
//    for (int i:A){
//        if (target == i){
//            cout<<"True"<<endl;
//        }
//    }
//    return 0;
//}



                    //Taking the array from the user itself...


int main4() {
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int A[size];
    cout<<"Enter the elements of the array..."<<endl;
    for(int i=0;i<=size;i++){
        cin>>A[i];
    }
    
    int target;
    cout<<"Enter a target: ";
    cin>>target;
    
    for(int j:A){
        if (target == A[j]){
            cout<<"Found at Index: "<<j<<endl;
            return 0;
        }
    }
    cout<<"The Target is not found."<<endl;
    return 0;
}
