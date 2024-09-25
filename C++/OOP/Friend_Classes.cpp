//
//  Friend_Classes.cpp
//  OOP
//
//  Created by Gourav Dash on 17/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

//Friend Funtion

//class Test
//{
//private: int a;
//protected: int b;
//public: int c;
//    friend void fun();
//};
//
//void fun()
//{
//    Test t;
//    t.a=10; // I cannot Access int a and int b without using friend funtion...
//    t.b=9;  //
//    t.c=5;
//};

//Friend Funtion in Class

class Your;
class My
{
private: int a;
protected: int b;
public: int c;
    friend Your;
};
class Your
{
public:
    My m;
    void fun()
    {
        m.a=10; // You cannot access m.a & m.b without using mentioning "Your" class as a Friend in "My" class.
        m.b=9;  //
        m.c=5;
    }
};
