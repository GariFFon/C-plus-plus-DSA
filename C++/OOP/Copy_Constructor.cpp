//
//  Copy_Constructor.cpp
//  OOP
//
//  Created by Gourav Dash on 11/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

//Deep Copy Constructor...
class Test
{
public:
    int a;
    int *p;
    Test (int x)
    {
        a=x;
        p= new int [a];
    }
    Test (Test &t)
    {
        a=t.a;
        p=t.p;
    }
    
};
int main4()
{
    Test t(5);
    Test t2(t);
    return 0;
}
