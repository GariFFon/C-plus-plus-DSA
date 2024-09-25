//
//  Count_Vowel_Consonants_Words.cpp
//  String
//
//  Created by Gourav Dash on 08/08/24.
//

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main15(){
    
    string str;
    cout<<"Enter a String: ";
    getline(cin,str);
    
    int vowels=0;
    int consonants=0;
    int words=1; // if not 1 then you will get 1 less number of words...
    
    for(int i=0;str[i]!='\0';i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowels++;
        } 
        else if (str[i] == ' ')
        {
            words++;
        } 
        else
        {
            consonants++;
        }
    }
    cout<<"Number of vowels are: "<<vowels<<endl;
    cout<<"Number of consonants are: "<<consonants<<endl;
    cout<<"Number of words are: "<<words<<endl;
    
    return 0;

}
