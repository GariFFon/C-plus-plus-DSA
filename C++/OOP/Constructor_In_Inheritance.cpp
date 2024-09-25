//
//  Constructor_In_Inheritance.cpp
//  OOP
//
//  Created by Gourav Dash on 16/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout<<"Non - param Base: "<<endl;
    }
    Base(int x)
    {
        cout<<"Param of Base: "<<x<<endl;
    }
};
class Derived:public Base
{
public:
    Derived()
    {
        cout<<"Non - param Dervied:"<<endl;
    }
    Derived(int y)
    {
        cout<<"Param of Derived: "<<y<<endl;
    }
    Derived(int x,int y):Base(x)
    {
        cout<<"Param of Derived: "<<y<<endl;
    }
};
int main7()
{
    Derived d;
    cout<<""<<endl;
    Derived d1(10);
    cout<<""<<endl;
    Derived d2(10,15);
    
    return 0;
}
