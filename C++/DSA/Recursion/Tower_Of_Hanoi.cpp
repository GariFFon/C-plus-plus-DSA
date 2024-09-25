//
//  Tower_Of_Hanoi.cpp
//  Recurstion
//
//  Created by Gourav Dash on 15/09/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void TOH(int n,int A,int B,int C)
{
    if(n>0)
    {
        TOH(n-1,A,C,B);
        cout<<"("<<A<<","<<C<<")";
        TOH(n-1,B,A,C);
    }
}
int main13()
{
    TOH(2,1,2,3);
    return 0;
}
