//
//  Sum_of_all_the_transaction.cpp
//  Basics
//
//  Created by Gourav Dash on 24/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main20()
{
    int n;
    cin>>n;
    int d;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>d;
        sum+=d;
    }
    cout<<sum<<endl;
    return 0;
}
