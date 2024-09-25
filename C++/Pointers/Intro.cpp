//
//  Intro.cpp
//  Pointers
//
//  Created by Gourav Dash on 05/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main1(){
    int a=10;
    int *p;
    p=&a;
    
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    
    return 0;
}
