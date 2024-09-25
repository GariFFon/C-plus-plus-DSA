//
//  Basic_funtion_PART_3.cpp
//  String
//
//  Created by Gourav Dash on 07/08/24.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main10(){
    
    //Funtion "s.copy(char des[])"
    
    string s;
    cout<<"Enter a String: ";
    getline(cin,s);
    
    char s1[10];
    cout<<"Enter a string: ";
    cin.getline(s1,10);
    
    s.copy(s1,s.length());
    cout<<"s1 has chaged into "<<s<<endl;
    
    //Function "s.find(str or char)"... to string or character in the main string.
    
    cout<<s.find("oura")<<endl;
    
    //funtion "s.rfind"... start finding the char or string from right side..
    
    cout<<s.rfind("G")<<endl;
    
    //funtoin "s.find_first_of()"... send the very first index where the char is found...
    
    cout<<s.find_first_of('o')<<endl;
    
    //funtoin "s.find_last_of()"... send the very last index where the char is found...
    
    cout<<s.find_last_of('u')<<endl;
    
    return 0;
}
