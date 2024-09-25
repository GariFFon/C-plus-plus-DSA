#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int * fun(int size){
    int *p;
    p= new int[size];
    
    for(int i=0;i<size;i++)
        p[i]=i + 1;
        return p;
}

int main3()
{
    int *ptr;
    int size=5;
    ptr = fun(size);
    for(int i=0;i<size;i++){
        cout<<ptr[i]<<endl;
    }
    return 0;
}

// void fun(int A[],int n){
//     int i;
//     int a=0;
//     for (i=0;i<n;i++){
//         printf("%d\n",A[i]);
//     }
// };
// int main()
// {
//     int A[5] = {2,3,4,5,6};
//     fun(A,5);
// }
// int add(int a, int b)
// {
//     return a+b;
// };

// int main()
// {
//     int x=10;int y=20;int z;
//     z=add(x,y);
//     cout<<"Sum is: "<<z<<endl;
// }





// struct Rectangle
// {
//     int length;
//     int breadth;
// };

// int main()
// {
//     struct Rectangle *p;
//     // p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
//     p= new struct Rectangle;
//     int a= p->length = 10;
//     int b= p->breadth = 5;
    
//     cout<<p->length<<endl;
//     cout<<b<<endl;
// }




// int main()
// {
//     int A[5]={2,3,4,5,6};
//     int *p;
//     p=A;
    
//     for (int i=0;i<5;i++){
//         cout<<p[i]<<endl;
//     }
// }



// int main()
// {
//     int a =10;
//     int *p;
//     p=&a;
    
//     cout << a<<endl;
//     cout<<"The Number: "<<*p<<endl;
// }

// struct Rectangle
// {
//     int length;
//     int breadth;
// };

// int main()
// {
//     struct Rectangle R1 = {10, 5};
    
//     R1.length = 15;
//     R1.breadth = 10;
    
//     cout<<R1.length<<endl;
//     cout<<R1.breadth<<endl;
    
    
//     // int a,b;
//     // std::cout <<"Enter a Number: "<< std::endl;
//     // std::cin>>b;
//     // a= 3.14 * b * b;
//     // std::cout <<"Area is: "<< a<< std::endl;
//     // return 0;
// }
