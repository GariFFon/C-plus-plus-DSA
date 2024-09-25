//
//  Sum_of_each_Elements_of_Matrix.cpp
//  Arrays
//
//  Created by Gourav Dash on 14/09/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void Sum_of_each_element_in_a_row_of_matrix(int arr[][100],int row,int col)
{
    
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
        {
            sum+=arr[i][j];
        }
        for(int k=0;k<col;k++)
        {
            arr[i][k]=sum;
        }
        for(int l=0;l<col;l++)
        {
            cout<<arr[i][l]<<" ";
        }
        cout<<endl;
    }
}


int main9()
{
    int num;
    cin>>num;
    int row;
    
    int col;
    int arr[100][100];
    
    for(int k=0;k<num;k++)
    {
        cin>>row;
        cin>>col;
        
        for (int i=0;i<row;i++)
        {
            for (int j=0;j<col;j++)
            {
                cin>>arr[i][j];
            }
        }
        Sum_of_each_element_in_a_row_of_matrix(arr,row,col);
    }
    return 0;
}
