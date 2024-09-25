//
//  main.cpp
//  File_Handling
//
//  Created by Gourav Dash on 19/08/24.
//

#include <iostream>
#include <fstream> //this extentsion is used for data file handling...
using namespace std;

int main1()
{
    ofstream ofs("First.txt",ios::trunc);
    ofs<<"Gourav"<<endl;
    ofs<<25<<endl;
    ofs<<"Out of the box"<<endl;
    
    ofs.close();
    
    return 0;
}
