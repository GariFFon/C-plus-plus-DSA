//
//  Data_Hiding.cpp
//  OOP
//
//  Created by Gourav Dash on 11/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;


//THe Actual and right way using Object Oriented Programming...
class Rectangle
{
private:
    int length;
    int breadth;
public:
    void setLength(int l){ //This set... is called Mutator
        if (l<0){
            length=0;
        }else{
            length=l;
        }
    }
    void setBreadth(int b){
        if (b<0){
            breadth=0;
        } else{
            breadth=b;
        }
    }
    int getLength(){ //This get.... is called  Accessor
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main3()
{
    Rectangle r;
    int L,B;
    cout<<"Enter Length: ";
    cin>>L;
    r.setLength(L);
    cout<<"Enter Breadth: ";
    cin>>B;
    r.setBreadth(B);
    
    cout<<"The Lenght is: "<<r.getLength()<<endl;
    cout<<"The Breadth is: "<<r.getBreadth()<<endl;
    cout<<"The Area is: "<<r.area()<<endl;
    cout<<"The Perimeter is: "<<r.perimeter()<<endl;
    
    
    return 0;
    
}
