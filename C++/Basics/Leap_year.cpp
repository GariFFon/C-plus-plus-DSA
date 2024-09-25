//
//  Leap_year.cpp
//  Basics
//
//  Created by Gourav Dash on 30/07/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main12()
{
    int year;
    
    cout << "Enter a year: ";
    cin >> year;
    
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " is a leap year."<<endl;
            else
                cout << year << " is not a leap year."<<endl;
        }
        else
            cout << year << " is a leap year."<<endl;
    }
    else
        cout << year << " is not a leap year."<<endl;
    
    return 0;  
}
