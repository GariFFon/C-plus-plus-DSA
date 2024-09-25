//
//  Reference.cpp
//  Pointers
//
//  Created by Gourav Dash on 06/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main5(){
    
    int x=10;
    int &y=x;
    //Once a reference is created for one variable then it cannot be changed at all....
    
    cout<<x<<endl;
    x++;
    y++;
    
    cout<<x<<endl;
    cout<<&x<<" "<<&y<<endl;
    
    return 0;
}
