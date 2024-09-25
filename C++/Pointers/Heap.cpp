//
//  Heap.cpp
//  Pointers
//
//  Created by Gourav Dash on 05/08/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main2(){
    //creating Array in a Heap...
    //{
    int *p;
                        //Heap
    p = new int [5];
    //}
    
    p[0]=10;
    p[1]=25;
    p[2]=32;
    
    cout<<p[1]<<endl;
    
    delete []p;
    
    p=nullptr;
    
    return 0;

}
