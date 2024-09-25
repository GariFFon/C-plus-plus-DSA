//
//  Enum_Typedef.cpp
//  Basics
//
//  Created by Gourav Dash on 30/07/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

//enum day {mon,tue,wed,thu,fri,sat,sun}; //all these are constant and they start with 0 only...

//enum day {mon=1,tue,wed,thu,fri,sat,sun}; //you can change the values also...

//enum day {mon=1,tue,wed,thu=10,fri,sat,sun}; //the values will increment by one after any value given by dev...
//
//typedef int marks;
//
//int main8(){
//    
//    //enum
//    //day d;
//    
//    //typedef
//    marks m1,m2; //m1 and m2 are storing in marks in integer form...
//    m1=50;
//    m2=90;
//    
//    cout<<m1<<endl;
//    cout<<m2<<endl;
//    cout<<mon<<endl;
//    cout<<tue<<endl;
//    cout<<wed<<endl;
//    cout<<thu<<endl;
//    cout<<fri<<endl;
//    cout<<sat<<endl;
//    cout<<sun<<endl;
//    
//    return 0;
//}

int main8()
{
    enum days{sun,mon,tues,wed,thur,fri,sat};
    days day1,day2;
    day1=sun;
    day2=fri;
    cout<<day1<<" "<<day2<<endl;
    if(day1>day2)
    {
        cout<<"Day 1 comes after the Day 2"<<endl;
        cout<<day1<<endl;
    }
    else
    {
        cout<<"Day 1 comes before the Day 2"<<endl;
        cout<<day2<<endl;
    }
    return 0;
}
