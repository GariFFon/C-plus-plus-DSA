//
//  Basic_funtion_PART_4.cpp
//  String
//
//  Created by Gourav Dash on 07/08/24.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main11(){
    
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    
    //funtion "s.substr"... s.substr(start_index,number);
    
    cout<<s.substr(3)<<endl;
    
    cout<<s.substr(3,4)<<endl;
    
    //funtion "string1.compare(string2);" returns -ve,0,+ve
    
    string string2="Programming";
    
    cout<<s.compare(string2)<<endl;
    
    // Some more Funtions
    
    cout<<s.front()<<endl;
    
    cout<<s.back()<<endl;
    
    cout<<s.at(3)<<endl;
    
    cout<<s+string2<<endl;
    
    string s2= s+string2;
    
    cout<<s2<<endl;
    
    
    return 0;
}
