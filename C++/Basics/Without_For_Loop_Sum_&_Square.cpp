//
//  Without_For_Loop_Sum_&_Square.cpp
//  Basics
//
//  Created by Gourav Dash on 27/08/24.
//


#include<stdio.h>
int main22()
{
    int n,c,d;
    scanf("%d",&n);
    
    c=((n)*(n+1))/2;
    printf("Sum of First %d natural numbers: %d\n",n,c);

    
    d=(n*(n+1)*(2*n+ 1))/6;
    printf("Sum of Square: %d\n",d);
    
    
    return 0;

}
