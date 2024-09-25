//
//  Taylor_Series.cpp
//  Recurstion
//
//  Created by Gourav Dash on 15/09/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

double e(int x,int n)
{
    static double p=1,f=1;
    double r;
    
    if(n==0)
    {
        return 1;
    }
    else
    {
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

int main9()
{
    cout<<e(1,10)<<" ";
    return 0;
}
