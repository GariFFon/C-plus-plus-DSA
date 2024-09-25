//
//  Perfect_Number.cpp
//  Basics
//
//  Created by Gourav Dash on 30/07/24.
//

#include <stdio.h>
#include<iostream>
//Perfect Number:
using namespace std;

int main14()
{
    int sum=0;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if (n%i == 0){
            sum+=i;
        }
    }
    if (sum == 2*n){
        cout<<"perfect"<<endl;
    } else{
        cout<<"not perfect"<<endl;
    }
    return 0;
}
