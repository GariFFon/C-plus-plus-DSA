//
//  Nested_or_Inner_Classes.cpp
//  OOP
//
//  Created by Gourav Dash on 17/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class Outer
{
public:
    
    void fun()
    {
        i.Display();
    }
    
    class Inner
    {
    public:
        
        void Display()
        {
            cout<<"Display of Inner"<<endl;
        }
    };
    Inner i;
};

//int main16()
//{
//    Outer::Inner i;
//    return 0;
//}
