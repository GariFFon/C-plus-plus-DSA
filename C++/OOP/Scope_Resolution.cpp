//
//  Scope_Resolution.cpp
//  OOP
//
//  Created by Gourav Dash on 12/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r);
    int getLength(){return length;}
    int getBreadth(){return breadth;}
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};
int main5()
{
    Rectangle r1(10,5);
    cout<<"The Area: "<<r1.area()<<endl;
    return 0;
}

Rectangle::Rectangle()
{
    length=1;
    breadth=1;
}
Rectangle::Rectangle(int length ,int breadth)
{
    this->length=length; //"This" can be used as pointer to the length variable if both have the same variable name...
    this->breadth=breadth;
}
void Rectangle::setLength(int l)
{
    length=l;
}
void Rectangle::setBreadth(int b)
{
    breadth=b;
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
bool Rectangle::isSquare()
{
    return length==breadth;
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle Destroyed..."<<endl;
}
