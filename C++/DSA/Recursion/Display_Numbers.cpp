//
//  main.cpp
//  Recurstion
//
//  Created by Gourav Dash on 28/08/24.
//

#include <iostream>
using namespace std;

void display1(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        display1(n-1);
    }
};

void display2(int n)
{
    if(n>0)
    {
        display2(n-1);
        cout<<n<<endl;
    }
}
int main1()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    display2(n);
    display1(n);
    return 0;
}
