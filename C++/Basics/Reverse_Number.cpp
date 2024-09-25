//
//  Reverse_Number.cpp
//  Basics
//
//  Created by Gourav Dash on 01/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main17(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int rev=0;

    
    while(n>0){
        int r;
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    cout<<rev<<endl;
    return 0;
}
