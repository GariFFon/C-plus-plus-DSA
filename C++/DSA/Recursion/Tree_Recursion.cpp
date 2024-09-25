//
//  Tree_Recursion.cpp
//  Recurstion
//
//  Created by Gourav Dash on 11/09/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void display(int x)
{
    if(x>0)
    {
        cout<<x<<endl;
        display(x-1);
        display(x-1);  //IN tree recursion we call the funtions multiple times within the same funtion...
    }
}
int main3()
{
    display(3);
    return 0;
}
