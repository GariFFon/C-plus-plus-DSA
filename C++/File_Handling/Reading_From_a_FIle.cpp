//
//  Reading_From_a_FIle.cpp
//  File_Handling
//
//  Created by Gourav Dash on 19/08/24.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

//One Way of Writing...

//int main2()
//{
//    ifstream ifs("First.txt");
//    string name;
//    int num;
//    string think; //This will return only the Third Word...
//    
//    ifs>>name>>num>>think;
//    ifs.close();
//    
//    cout<<"Name: "<<name<<endl;
//    cout<<"Roll No: "<<num<<endl;
//    cout<<"Think: "<<think<<endl;
//    
//    return 0;
//}

//Another way of writing...

int main2()
{
    ifstream ifs;
    ifs.open("First.txt");
    
    if(ifs.is_open())cout<<"File has opened successfully..."<<endl;
    string name;
    int num;
    string think; //This will return only the Third Word...
    
    ifs>>name>>num>>think;
    ifs.close();
    
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<num<<endl;
    cout<<"Think: "<<think<<endl;
    
    return 0;
}
