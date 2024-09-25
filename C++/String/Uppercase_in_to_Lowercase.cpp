//
//  Uppercase_in_to_Lowercase.cpp
//  String
//
//  Created by Gourav Dash on 08/08/24.
//

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main14(){
    
    string str;
    cout<<"Enter a String: ";
    getline(cin,str);
    
    for(int i=0; str[i] != '\0';i++)
    {
        str[i]+=32;
        
        //now what if the string is like "WELCOmE"... then at m it will show some error.
        //ANS:
        
//        if(str[i] >= 65 && str[i]<=90)
//        {
//            str[i]+=32;
//        }
    }
    
    cout<<str<<endl;
    return 0;
}
