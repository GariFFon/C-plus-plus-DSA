//
//  Basic_funtion_of_the_string.cpp
//  String
//
//  Created by Gourav Dash on 07/08/24.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main8(){
    
    string str;
    cout<<"Enter a String: ";
    getline(cin,str);
    
    // 1. Length and Size
    cout<<str.length()<<endl; //Give the length of the string
    //both size and length are same...
    cout<<str.size()<<endl;
    
    //2. Capacity and resize
    cout<<str.capacity()<<endl;//show the capacity to how you can fill the string
    str.resize(35);//increases the capacity of the string
    cout<<str.capacity()<<endl; //resized string
    
    //3. Max_Size and Empty and Clear or erase
    cout<<str.max_size()<<endl; //Show the maximum capacity a string can have.
    str.clear(); //clear the string
    //both are same
    //str.erase(); //clear the string
    cout<<str<<endl;
    
    string str2="hello";
    if(str2.empty()){
        cout<<"Empty"<<endl;
    } else{
        cout<<"Not Empty"<<endl;
    }
    return 0;
    
}
