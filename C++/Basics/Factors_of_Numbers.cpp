//
//  Prime_factors.cpp
//  Basics
//
//  Created by Gourav Dash on 30/07/24.
//

#include <stdio.h>
#include<iostream>

using namespace std;

int main13()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=1;i<=n;i++) //we cannot take i=0 because it will give floating point excception...
    {
        if(n%i == 0){
            cout<<i<<" ";
        }
    }
    return 0;
}
