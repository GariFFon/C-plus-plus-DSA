//
//  Rectangle_Class.cpp
//  OOP
//
//  Created by Gourav Dash on 11/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;
//OOP uses Bottom up approach...
//Procedural language uses top down approach...

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

int main1()
{
    Rectangle r1; //This Created Object In Stack
    cout<<"Enter Length: ";
    cin>>r1.length;
    cout<<"Enter Breadth: ";
    cin>>r1.breadth;
    
    cout<<"The Area is: "<<r1.area()<<endl;
    cout<<"The Perimeter is: "<<r1.perimeter()<<endl;
    
    return 0;
}
