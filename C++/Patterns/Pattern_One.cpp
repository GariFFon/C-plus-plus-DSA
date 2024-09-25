//
//  Nested_Loop.cpp
//  Pattern_Questions
//
//  Created by Gourav Dash on 04/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;
 
//Pattern 1

int main1() {
    
    for (int i =1 ; i<=5; i++){ //first for loop will act as a row going downwards
        
        for (int j=1; j<=5; j++){ //second for loop will act as a column going left to right
            
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//Pattern 2

//int main1() {
//    
//    for (int i=1;i<=5;i++){
//        
//        for (int j=1;j<=5;j++){
//            
//            cout<<"("<<i<<","<<j<<") ";
//        }
//        cout<<endl;
//    }
//    
//    return 0;
//}
