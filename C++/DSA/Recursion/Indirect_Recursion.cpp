//
//  Indirect_Recursion.cpp
//  Recurstion
//
//  Created by Gourav Dash on 14/09/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;
void funB(int n);
void funA(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        funB(n-1);
    }
}
void funB(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        funA(n/2);
    }
}

int main4()
{
    funA(20);
    return 0;
}
