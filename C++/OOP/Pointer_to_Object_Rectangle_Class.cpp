//
//  Pointer_to_Object_Rectangle_Class.cpp
//  OOP
//
//  Created by Gourav Dash on 11/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;
    
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2 * (length+breadth);
    }
};

int main2()
{
    Rectangle *p; //This Created object In heap...
    p= new Rectangle();
    
    p->length=15;
    p->breadth=7;
    cout<<p->area()<<endl;
    cout<<p->perimeter()<<endl;
    
    return 0;
    
}
