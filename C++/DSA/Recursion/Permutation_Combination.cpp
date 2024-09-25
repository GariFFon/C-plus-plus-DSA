//
//  Permutation_Combination.cpp
//  Recurstion
//
//  Created by Gourav Dash on 15/09/24.
//
#include <stdio.h>
#include <iostream>
using namespace std;
int fac(int n)
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
        return fac(n-1)*n;
    }
}

int nCr(int n,int r)
{
    int t1,t2,t3;
    t1=fac(n);
    t2=fac(r);
    t3=fac(n-r);
    
    return t1/(t2*t3);
}

int main12()
{
    int n,r;
    cout<<"Enter two number: ";
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;
    return 0;
}
