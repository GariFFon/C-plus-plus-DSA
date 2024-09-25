//
//  Sorting_Array.cpp
//  Arrays
//
//  Created by Gourav Dash on 13/09/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main8()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    bool allsame=true;
    for(int j=1;j<n-1;j++)
        if(arr[j] != arr[0])
        {
            allsame=false;
        }
    
    if(allsame)
    {
        cout<<"All the Numbers are same..."<<endl;
    }
    else
    {
        //BUBBLE SORT
        for(int m=0;m<n-1;m++)
        {
            for(int l=0;l<n-m-1;l++)
            {
                if(arr[l] > arr[l+1])
                {
                    swap(arr[l],arr[l+1]);
                }
            }
        }
    }
    
    for(int b=0;b<n;b++)
    {
        cout<<arr[b]<<" ";
    }
    cout<<endl;
    return 0;
}
