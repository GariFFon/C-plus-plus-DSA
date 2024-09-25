//
//  Power_Recursion.cpp
//  Recurstion
//
//  Created by Gourav Dash on 14/09/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int power(int m,int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return power(m,n-1)*m;
    }
}

int power1(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    if (n%2==0)
    {
        return power1(m*m,n/2);
    }
    else
    {
        return m*power1(m*m,(n-1)/2);
    }
}

int main8()
{
    cout<<power(2,9)<<" ";
    cout<<endl;
    cout<<power(3,4)<<" ";
    cout<<endl;
    cout<<power1(3,4)<<" ";
    cout<<endl;

    return 0;
}
