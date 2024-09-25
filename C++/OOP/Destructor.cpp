//
//  Destructor.cpp
//  OOP
//
//  Created by Gourav Dash on 18/09/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class A {
    int id;
    public:
    A(int i){
        id = i;
        cout << "constructor called: "<<id<<endl;
    }
    ~A(){
        cout <<"destrucotr called: "<<id<<endl;
    }
};

int main17() {
  A obj1(1);
  A obj2(2);
  return 0;
}
