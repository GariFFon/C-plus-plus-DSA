//
//  Strtol_Strtof.cpp
//  String
//
//  Created by Gourav Dash on 07/08/24.
//

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

//Funtion "strtol & strtof"... strtol(string1), strtof(string1,NULL)

int main6(){
    
    char s[20]="235";
    char s2[20]="54.78";
    
    long int x= strtol(s,NULL,10);
    float y= strtof(s2, NULL);
    
    cout<<x<<" "<<y<<endl;
    cout<<"These are now have become string to numbers..."<<endl;
    
    cout<<x+10<<" "<<y+20<<endl;
    
    return 0;
}


//Funtion "strtok"... strtok(string1,"=;")... tokenize the string..!!

//int main6(){
//
//    char s[20]="x=10;y=20;z=35;";
//    
////    cout<<strtok(s, "=;")<<endl;
//    
//    char *token= strtok(s,"=;");
//    
//    while(token != NULL){
//        
//        cout<<token<<endl;
//        token=strtok(NULL,"=;");
//        
//    }
//    
//    return 0;
//}
