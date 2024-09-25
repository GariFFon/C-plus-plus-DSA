//
//  main.cpp
//  Exception_Handling
//
//  Created by Gourav Dash on 17/08/24.
//

#include <iostream>
using namespace std;

int main1()
{
    int a=10,b=0,z;
    try 
    {
        if (b==0)
        {
            throw 1;
        }
        else
        {
            z=a/b;
            cout<<z<<endl;
        }
    } catch (int e) // Or you can write "catch (...)" which means that it can catch any type of exception...
    //And catch all block should always be the last block other wise if there are multuple catch block then it won't allow other catch block to work...
    {
        cout<<"Displayed... Throw: "<<e<<endl;
    }
    return 0;
}
