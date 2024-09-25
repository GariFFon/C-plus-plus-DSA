//
//  Binary_Search_In_Array.cpp
//  Arrays
//
//  Created by Gourav Dash on 02/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

//The Time and space complexity of Binary Search is O(logn)....

int main5() {
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    
    int A[size];
    cout<<"Enter the elements of the array.."<<endl;
    for (int i=0;i<=size;i++){
        cin>>A[i];
    }
    
    // taking low and high... in the binary search
    
    int low=0; //it is the starting index... int start = 0;
    int high= size -1; // it the last index
    int target;
    cout<<"Enter the Tartget: ";
    cin>>target;
    
    while (low<=high){
        int mid= (low + high)/2;
        if (target == A[mid])
        {
            cout<<"Found at: "<<mid<<endl;
            return 0;
        }
        else if(target < A[mid])
        {
            high = mid - 1;
        } else
        {
            low = mid + 1;
        }
    }
    cout<<"Not found.."<<endl;
    return 0;
}
