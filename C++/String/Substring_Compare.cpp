//
//  Substring_Compare.cpp
//  String
//
//  Created by Gourav Dash on 07/08/24.
//

#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;

//Funtion "strstr" strstr(main,sub)

int main5()
{
    char s[100];
    char s2[100];
    
    cout<<"Enter First String: ";
    cin.getline(s,100);
    cout<<"Enter Second String: ";
    cin.getline(s2,100);
    
    //substring funtion take the substring and other character of that string if they are coming afte the substring from the main string and will print them all together...
    
    if(strstr(s,s2) != NULL){
        cout<<strstr(s,s2)<<endl;
    } else{
        cout<<"NOT FOUND"<<endl;
    }
    
    return 0;
}

//Funtion "strchr" strchr(main,char)

//int main5(){
//    
//    char s[20]="Programming";
//    
//    cout<<strchr(s,'g')<<endl;
//    
//    cout<<strchr(s,'r')<<endl;
//    
//   // cout<<strchr(s,'p')<<endl; //This will give error coz small p is not there in the string.
//    
//    cout<<strrchr(s,'g')<<endl;//started the reading from the right side.
//
//    cout<<strrchr(s,'r')<<endl;
//
//    
//    return 0;
//}

//Funtion "strcmp" strcmp(string1 , string2)... [returns -ve,0,+ve]
 
// 1. strcmp takes aplhabetical order for example apple come before banana in dictionary...
// 2. If string1 is smaller than string2 then it returns the -ve value...
// 3. If string 1 is equal to the string2 then it returns 0...
// 4. If string 1 is greater than the string2 the it returns +ve value..
// 5. If the aplphabets are same then it will go by the case system using ASCII value... for example "Hello" and "hello" in this case "hello" is greater coz ASCII value of 'h' is 105 where 'H' is 73... return the difference in their ASCII value i.e 32...

//int main5()
//{
//    char s[100];
//    char s2[100];
//    
//    cout<<"Enter First String: ";
//    cin.getline(s,100);
//    cout<<"Enter Second String: ";
//    cin.getline(s2,100);
//    
//    cout<<strcmp(s,s2)<<endl;
//    
//    return 0;
//}
