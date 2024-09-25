//
//  Sum_Of_First_n_Natural_Num.cpp
//  Basics
//
//  Created by Gourav Dash on 29/07/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main5(){
    
    int num;
    float sum;
    
    cout<<"Enter a number: "<<endl;
    cin>>num;
    
    sum=(float)(num*(num+1))/2;
    
    cout<<"The sum of first n Natural number is: "<<sum<<endl;
    return -1;
}
