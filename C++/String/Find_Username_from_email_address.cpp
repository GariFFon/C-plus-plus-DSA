//
//  Find_Username_from_email_address.cpp
//  String
//
//  Created by Gourav Dash on 08/08/24.
//

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main17(){
    
    string s;
    cout<<"Enter a String: ";
    getline(cin,s);
    
    string s2;
    string::iterator i;
    for(i=s.begin();i != s.end() ; i++)
    {
        if(*i != '@')
        {
            s2+=*i;
        } else
        {
            break;
        }
    }
    
    cout<<"The Username is: "<<s2<<endl;
    
    return 0;
}
