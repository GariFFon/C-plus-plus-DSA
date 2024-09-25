//
//  Inheritance.cpp
//  OOP
//
//  Created by Gourav Dash on 15/08/24.
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

class Cuboid: public Rectangle
{
private:
    int height;
public:
    Cuboid (int l=0,int b=0,int h=0)
    {
        height = h;
        setLength(l);
        setBreadth(b);
    }
    int getHeight(){return height;}
    void setHeight(int h);
    int volume()
    {
        return getLength()*getBreadth()*getHeight();
    }
};

int main6()
{
    
    Cuboid c1(10,5,3);
    cout<<"The Volume of Cuboid is: "<<c1.volume()<<endl;
    return 0;
    
}
