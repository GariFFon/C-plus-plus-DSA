//
//  Funtion_Overriding.cpp
//  OOP
//
//  Created by Gourav Dash on 17/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class Base
{
public:
    void Display()
    {
        cout<<"Display of Base"<<endl; //Same Funtion
    }
};
class Derived:public Base
{
public:
    void Display()
    {
        cout<<"Display of Derived"<<endl; //Same Funtion but this overwrite the previous one...
    }
};

int main12()
{
    Derived d;
    d.Display();
    
    return 0;
}
