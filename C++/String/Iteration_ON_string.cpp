//
//  Iteration_ON_string.cpp
//  String
//
//  Created by Gourav Dash on 08/08/24.
//

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

//Using For Loop... without any funtion...

int main12(){
    
    string s;
    cout<<"Enter a String: ";
    getline(cin,s);
    
    for(int i=0;s[i]!='\0';i++)
    {
        cout<<s[i]<<endl;
    }
        
    return 0;
}


//int main12(){
//
//    string s;
//    cout<<"Enter a String: ";
//    getline(cin,s);
//    
//  //    string s2;
//  //    cout<<"Enter a String: ";
//  //    getline(cin,s2);
//    
//    string::iterator i;
//    
//    cout<<s<<endl;
//    
//    for(i=s.begin(); i != s.end();i++)
//    {
//        //now making all the letters into uppercase...
//        *i-=32;
//        cout<<*i;
//    }
//    cout<<""<<endl;
//    return 0;
//}


//Now Reverse_Iterator


//int main12(){
//
//    string s;
//    cout<<"Enter a String: ";
//    getline(cin,s);
//    
//  //    string s2;
//  //    cout<<"Enter a String: ";
//  //    getline(cin,s2);
//
//    string::reverse_iterator i;
//    
//    cout<<s<<endl;
//    
//    for(i=s.rbegin(); i != s.rend();i++)
//    {
//        cout<<*i;
//    }
//    cout<<""<<endl;
//    return 0;
//}
