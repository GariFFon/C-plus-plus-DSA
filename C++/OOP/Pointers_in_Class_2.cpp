//
//  Pointers_in_Class_2.cpp
//  OOP
//
//  Created by Gourav Dash on 16/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class Rectangle
{
public:
    void area()
    {
        cout<<"Area of Rectangle"<<endl;
    }
};
class Cuboid: public Rectangle
{
public:
  void volume()
    {
      cout<<"Volume od Cuboid"<<endl;
  }
};

int main11()
{
    //One way
 
//    Rectangle *c;
//    c = new Cuboid;
    
    //Second Way
    
    Cuboid c;
    Rectangle *p=&c;
    
    p->area();
//    p->volume(); //no memver name volume in Rectangel class...
    return 0;
}
