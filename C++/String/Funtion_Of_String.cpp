//
//  Funtion_Of_String.cpp
//  String
//
//  Created by Gourav Dash on 06/08/24.
//

#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;

//Length of a String

//int main()
//{
//    char s[100];
//    cout<<"Enter the Name: ";
//    cin.getline(s,100);
//    
//    cout<<strlen(s)<<endl;
//    return 0;
//}


//Concatination of Two String

int main3() {
    
    char s[100];
    cout<<"Enter a Name: ";
    cin.getline(s,100);
    
    char s2[100];
    cout<<"Enter another Name: ";
    cin.getline(s2,100);
    
    //strcat(s,s2); //it is concatinated in "char s"...
    
    strncat(s,s2,3);
    
    cout<<s<<endl;
    
    
    return 0;
}
