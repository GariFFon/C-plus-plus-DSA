//
//  Sum_of_N_Natural_Numbers.cpp
//  Recurstion
//
//  Created by Gourav Dash on 14/09/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

//Using Recursive Funtion
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return sum(n-1)+n;
    }
}

int main6()
{
    int n;
    cout<<"Enter The Number: ";
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}
//Using Funtion

//void NaturalNum_Sum(int num)
//{
//    int sum=0;
//    for(int i=0;i<=num;i++)
//    {
//        sum+=i;
//    }
//    cout<<sum<<endl;
//}
//int main()
//{
//    int n;
//    cout<<"Enter the Number: ";
//    cin>>n;
//    NaturalNum_Sum(n);
//    return 0;
//}
