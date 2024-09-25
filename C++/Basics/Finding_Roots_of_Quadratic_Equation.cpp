//
//  Finding_Roots_of_Quadratic_Equation.cpp
//  Basics
//
//  Created by Gourav Dash on 29/07/24.
//

#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main6(){
    int a,b,c;
    float r1,r2;
    
    cout<<"Enter a:"<<endl;
    cin>>a;
    cout<<"Enter b:"<<endl;
    cin>>b;
    cout<<"Enter c:"<<endl;
    cin>>c;
    
    r1=(-b + sqrt((b*b)-(4*a*c)))/(2*a);
    r2=(-b - sqrt((b*b)-(4*a*c)))/(2*a);
    
    cout<<"The Roots are: "<<r1<<" and "<<r2<<endl;
    
    return 0;
}
