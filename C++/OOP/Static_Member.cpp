//
//  Static_Member.cpp
//  OOP
//
//  Created by Gourav Dash on 17/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class Test
{
public:
    int a;
    static int count;
    //static funtion can access only static members not other than that...
    
    Test()
    {
        a=0;
        count++;
    }
};
int Test::count=0;
int main15()
{
    Test t1,t2;
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    t1.count=25;
    cout<<t2.count<<endl;
    return 0;
}
