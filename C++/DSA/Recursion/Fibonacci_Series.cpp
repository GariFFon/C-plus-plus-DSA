//
//  Fibonacci_Series.cpp
//  Recurstion
//
//  Created by Gourav Dash on 15/09/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

//Using Recursive Funtion
int fibo(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fibo(n-2) + fibo(n-1);
}

//Using Loop
//int fibo(int n)
//{
//    int t0=0,t1=1,s=0,i;
//    if(n<=1)
//    {
//        return n;
//    }
//    for(i=2;i<=n;i++)
//    {
//        s=t0+t1;
//        t0=t1;
//        t1=s;
//    }
//    return s;
//}


int main11()
{
    cout<<fibo(10)<<endl;
    return 0;
}
