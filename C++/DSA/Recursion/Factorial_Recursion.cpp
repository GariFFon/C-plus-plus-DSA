//
//  Factorial_Recursion.cpp
//  Recurstion
//
//  Created by Gourav Dash on 14/09/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int fact(int n)
{
    if(n<0)
    {
        return 0;
    }
    else if (n==0)
    {
        return 1;
    }
    else
    {
        return fact(n-1)*n;
    }
}
int main7()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}
