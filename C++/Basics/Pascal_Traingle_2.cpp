//
//  Pascal_Traingle_2.cpp
//  Basics
//
//  Created by Gourav Dash on 15/09/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main24()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    
    //Incrementing Loop
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    //Decrementing Loop
    for(int k=n;k>=1;k--)
    {
        for(int l=1;l<k;l++)
        {
            cout<<l<<" ";
        }
        cout<<endl;
    }
    return 0;
}
