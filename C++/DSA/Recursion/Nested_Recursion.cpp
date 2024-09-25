//
//  Nested_Recursion.cpp
//  Recurstion
//
//  Created by Gourav Dash on 14/09/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int funC(int n)
{
    if(n>100)
    {
        return n-10;
    }
    else
    {
        return funC(funC(n+11));
    }
}

int main5()
{
    cout<<funC(95)<<endl;
    cout<<funC(99)<<endl;
    cout<<funC(100)<<endl;
    cout<<funC(200)<<endl;
    cout<<funC(30)<<endl;
    return 0;
}
