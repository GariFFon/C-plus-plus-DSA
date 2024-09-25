//
//  Access_Specifiers.cpp
//  OOP
//
//  Created by Gourav Dash on 16/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;
//OOP uses Bottom up approach...
//Procedural language uses top down approach...

class Rectangle
{
private:
    int length;
    int breadth;
public:
    void setLength(int l)
    {
        if(l>0)
        {
            length=l;
        } else
        {
            length=0;
        }
    }
    void setBreadth(int b)
    {
        if(b>0)
        {
            breadth=b;
        } else
        {
            breadth=0;
        }
    }
    int getLength(){return length;}
    int getBreadth(){return breadth;}
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2 * (length+breadth);
    }
};
int main8()
{
    Rectangle r1;
    r1.setLength(10);
    r1.setBreadth(5);
    cout<<"Area is: "<<r1.area()<<endl;
    return 0;
    
}
