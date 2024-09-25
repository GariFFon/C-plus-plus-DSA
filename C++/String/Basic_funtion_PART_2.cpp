//
//  Basic_funtion_PART_2.cpp
//  String
//
//  Created by Gourav Dash on 07/08/24.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main9(){
    string s;
    cout<<"Enter a String: ";
    getline(cin,s);
    
    cout<<s.append(" World")<<endl; // Add the words in front of the string..
    
    //funtion "s.insert"... s.insert(index,string u want to insert);
    
    cout<<s.insert(3,"World")<<endl;
    cout<<s.insert(3,"World",2)<<endl;
    
    //funtion "s.replace"... s.replace(index,till number of character,string);
    
    cout<<s.replace(3,4,"kk")<<endl;
    
    //funtion "s.push_back" and "s.pop_back"
    
    //s.push_back(char);
    //s.pop_back(); delete the letter from the back
    
    s.push_back('z');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    
    //funtion "s.swap()"... string1.swap(string2);
    
    string s2="Hello";
    s.swap(s2);
    cout<<s<<endl;
    
    return 0;
}
