//
//  Display_Digit_Of_Number.cpp
//  Basics
//
//  Created by Gourav Dash on 30/07/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main15()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    
    while(n>0)
    {
        int r;
        r=n%10;
        n=n/10;
        
        cout<<r<<endl;
    }
    return 0;
}
