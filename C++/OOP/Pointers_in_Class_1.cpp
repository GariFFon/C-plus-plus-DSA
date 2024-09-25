//
//  Pointers_in_Class.cpp
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
    void fun1()
    {
        cout<<"Fun1 of Base:"<<endl;
    }
};
class Derived:public Base
{
public:
    void fun2()
    {
        cout<<"Fun2 of Derived:"<<endl;
    }
};

int main10()
{
    Derived d;
    Base *ptr=&d;
    
    ptr->fun1();
    //ptr->fun2(); Cannot Call funtions from derived class...
    return 0;
}
