//
//  Count_Words.cpp
//  String
//
//  Created by Gourav Dash on 12/09/24.
//

#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string name;
    getline(cin,name);
    cin.ignore();
    int count = 0;
    int k=sizeof(name)/sizeof(name[0]);
    for(int i=0;i<k;i++)
    {
        if(name[i] ==' ')
        {
            count++;
        }
    }
    cout<<count+1<<endl;
    return 0;
    
}
