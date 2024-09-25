//
//  Reading_String.cpp
//  String
//
//  Created by Gourav Dash on 06/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

//int main2(){
//
//    char S[20];
//    cout<<"Enter a String: ";
//    
//   // cin>>S;
//   // cin.get(S,20);
//    cin.getline(S,20);
//
//    cout<<"We Welcome you "<<S<<"."<<endl;
//    return 0;
//}

int main2(){
    
    char s[100];
    char s2[100];
    
    cout<<"Enter your name: ";
    cin.get(s,100);
    
    cout<<"Welcom "<<s<<endl;
    
    //when you use get two times in a row it won't take input of second get... it will ignore the line cin.get(s2,100);
    
    // How will you prevent this??
    
    //Ans: either you write "cin.ignore()" or you use "cin.getline()" method which will take input at every required step of the oode.
    
    cin.ignore();
    
    cout<<"Enter your name: ";
    cin.get(s2,100);
    
    cout<<"Welcome "<<s2<<endl;
    
    return 0;
}


