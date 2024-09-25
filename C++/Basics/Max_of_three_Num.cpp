//
//  Max_of_three_Num.cpp
//  Basics
//
//  Created by Gourav Dash on 30/07/24.
//

#include <stdio.h>
#include<iostream>
using namespace std;

int main10()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
   if(a > b && a > c)
    {
        cout<<a;
    }
    else
    {
        if(b > c)
        {
            cout<<b;
        }
        else
        {
            cout<<c;
        }
    }
    return 0;
}
