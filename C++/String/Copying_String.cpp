//
//  Copying_String.cpp
//  String
//
//  Created by Gourav Dash on 06/08/24.
//

#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;

int main4()
{
    char s[100];
    cout<<"Enter the name: ";
    cin.getline(s,100);
    
    char s2[100];
    
    strcpy(s2, s);
    
    cout<<s2<<endl;
    
    return 0;
}
