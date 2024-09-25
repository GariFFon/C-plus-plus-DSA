//
//  Palindrome.cpp
//  String
//
//  Created by Gourav Dash on 08/08/24.
//

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main16(){
    
    string s;
    cout<<"Enter a String: ";
    getline(cin,s);
    
    string s2;
    string::reverse_iterator i;
    
    for ( i=s.rbegin();i != s.rend();i++)
    {
        s2 = s2 + *i;
    }
    if (s==s2){
        cout<<"This word is Palidrome Word."<<endl;
    }
    else
    {
        cout<<"This word is not Palindrom Word."<<endl;
    }
    return 0;
}
