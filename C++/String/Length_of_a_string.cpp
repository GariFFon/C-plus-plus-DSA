//
//  Length_of_a_string.cpp
//  String
//
//  Created by Gourav Dash on 08/08/24.
//

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main13(){
    
    string s;
    cout<<"Enter a String: ";
    getline(cin,s);
    
    int count=0;
    for(int i=0;s[i]!='\0';i++)
    {
        count++;
    }
    
    cout<<count<<endl;
    return 0;
}
