//
//  Fibonacci_Series.cpp
//  Basics
//
//  Created by Gourav Dash on 13/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main18()
{
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    int sum=0;
    int a=0;
    int b=1;
    
    cout<<a<<endl;
    cout<<b<<endl;
    
    for (int i=2;i<num;i++)
    {
        sum = a + b;
        a=b;
        b=sum;
        cout<<sum<<endl;
    }
//    cout<<"The fibonacci Series is: "<<sum<<endl;
    
    return 0;
}
