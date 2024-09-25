//
//  Armstrong_Number.cpp
//  Basics
//
//  Created by Gourav Dash on 30/07/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main16()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum=0;
    int oro=n;
    
    while(n>0){
        int r;
        r=n%10;
        n=n/10;
        sum=sum + (r*r*r);
    }
    if(oro == sum){
        cout<<"Armstrong Number!!"<<endl;
    } else{
        cout<<"Not Armstrong Number!!"<<endl;
    }
    return 0;
}
