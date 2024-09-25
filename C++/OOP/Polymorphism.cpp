//
//  Polymorphism.cpp
//  OOP
//
//  Created by Gourav Dash on 17/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class Car
{
public:
//    void Start(){cout<<"Car Started"<<endl;}
      virtual void Start(){cout<<"Car Started"<<endl;}

    
};
class Innova : public Car
{
public:
    void Start(){cout<<"Innova Started"<<endl;}
};
class Swift : public Car
{
public:
    void Start(){cout<<"Swift Started"<<endl;}
};

int main13()
{
    Car *p = new Innova();
    p->Start(); // Answer "Car Started"... without Virtual funtion
    p= new Swift();
    p->Start();
    
    return 0;
}
