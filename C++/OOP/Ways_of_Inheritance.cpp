//
//  Ways_of_Inheritance.cpp
//  OOP
//
//  Created by Gourav Dash on 16/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class Parent
{
private: int a;
protected: int b;
public: int c;
    
    void funParent()
    {
        a=10;
        b=5;
        c=20;
    }
};
class Child: public Parent
{
public:
    
    void funChild()
    {
        //a=10;
        b=5;
        c=20;
    }
};
class GrandChild: public Child
{
public:
    
    void funGrandChild()
    {
        //a=10;
        b=5;
        c=20;
    }
};
int main9()
{
    Child c;
    //c.a=10; Private in parent class
    //c.b=5;  Protected in parent class
    c.c=20;
    
    return 0;
}
