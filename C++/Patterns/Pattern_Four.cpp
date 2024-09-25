//
//  Pattern_Four.cpp
//  Pattern_Questions
//
//  Created by Gourav Dash on 04/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main4(){
    for (int i=0;i<4;i++){
        
        for (int j=0;j<4;j++){
            
            if(i>j){
                cout<<" ";
            } else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}
