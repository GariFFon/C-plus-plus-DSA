//
//  Switch_Case.cpp
//  Basics
//
//  Created by Gourav Dash on 30/07/24.
//

#include <stdio.h> //c
#include<iostream> //c++

using namespace std;

int main11()
{
    int day;
    cin>>day; //scanf
    switch(day)
    {
        case 1: cout<<"sun"; //printf
            break;
        case 2: cout<<"mon";
            break;
        case 3: cout<<"tue";
            break;
        case 4: cout<<"wed";
            break;
        case 5: cout<<"thu";
            break;
        case 6: cout<<"fri";
            break;
        case 7: cout<<"sat";
            break;
        default: cout<<"invalid day number";
    }
    return 0;
}

