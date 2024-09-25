//
//  Pattern_Three.cpp
//  Pattern_Questions
//
//  Created by Gourav Dash on 04/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

//One Way

//int main3(){
//
//    for(int i=1;i<=4;i++){
//        
//        for(int j=1;j<=i;j++){
//            
//            cout<<"* ";
//        }
//        cout<<endl;
//    }
//    return 0;
//}

//Second Way using If...

int main3(){
    int n;
    
    for(int i=0;i<4;i++){
        
        for(int j=0;j<4;j++){
            
            if(i>=j){
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}
