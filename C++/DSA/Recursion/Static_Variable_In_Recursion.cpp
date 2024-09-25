//
//  Static_Variable_In_Recursion.cpp
//  Recurstion
//
//  Created by Gourav Dash on 28/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

//int fun(int n)
//{
//    if(n>0)
//    {
//        return fun(n-1)+n;
//    }
//    return 0;
//};
//int main()
//{
//    int n;
//    cout<<"Enter The number: ";
//    cin>>n;
//    int r=fun(n);
//    cout<<"The Sum is: "<<r<<endl;
//    return 0;
//}

//Now Adding static variable to the this Recursive Funtion

int fun(int n)
{
    static int x=0;
    if(n>0)
    {
        x++;
        return fun(n-1)+x;
    }
    return 0;
};
int main2()
{
    int n;
    cout<<"Enter The number: ";
    cin>>n;
    int r=fun(n);
    cout<<"The Sum is: "<<r<<endl;
    return 0;
}
