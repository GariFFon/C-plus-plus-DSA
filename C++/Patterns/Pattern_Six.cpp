//
//  Pattern_Six.cpp
//  Pattern_Questions
//
//  Created by Gourav Dash on 04/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

//One way

int main6(){
    
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int c=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<c){
                cout<<"  ";
            }else{
                cout<<"* ";
            }
        }
        cout<<endl;
        c--;
    }
    return 0;
}

//Seoond way...

//int main6(){
//
//    for(int i=0;i<4;i++){
//        
//        for(int j=0;j<4;j++){
//            
//            if(i+j>=4-1){
//                cout<<"*";
//            } else{
//                cout<<" ";
//            }
//        }
//        cout<<endl;
//    }
//    return 0;
//}
