//
//  Taylor_Series_Using_Horner's_Rule.cpp
//  Recurstion
//
//  Created by Gourav Dash on 15/09/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

//Using Loop
//double e1(int x,int n)
//{
//    double s=1;
//    int i;
//    double num=1;
//    double den=1;
//    
//    for(i=1;i<=n;i++)
//    {
//        num+=x;
//        den*=i;
//        s+=num/den;
//    }
//    return s;
//}


//Using Recursive Funtion
double e1(int x,int n)
{
    static double s;

    if(n==0)
        return s;
    s=1+x*s/n;
    return e1(x,n-1);
}

int main10()
{
    cout<<e1(2,10)<<" ";
    return 0;
}
