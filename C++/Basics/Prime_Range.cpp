//
//  Prime_Range.cpp
//  Basics
//
//  Created by Gourav Dash on 25/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void isPrime(int start , int end)
{
    for (int i=start; i<=end;i++)
    {
        int count =0;
        for (int j=2; j<=i ; j++)
        {
            if (i%j==0)
            {
                count++;
            }
        }
        if (count<2)
            {
                cout<<i<<endl;
            }
    }
}

int main21()
{
    int start;
    cout<<"Enter the start Number: ";
    cin>>start;
    int end;
    cout<<"Enter the end Number: ";
    cin>>end;
    
    isPrime(start,end);
    return 0;
}
