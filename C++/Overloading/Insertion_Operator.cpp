//
//  Insertion_Operator.cpp
//  Overloading
//
//  Created by Gourav Dash on 14/08/24.
//

#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex (int r=0, int i=0)
    {
        real =r;
        img =i;
    }
    
    friend ostream & operator << (ostream &o, Complex &c1);
};
ostream & operator << (ostream &o, Complex &c1)
{
    o<<c1.real<<"+i"<<c1.img<<endl;
    return o;
}

int main3()
{
    Complex c1(5,3);
    
    cout<<c1;
    operator<<(cout,c1);
    return 0;
    
}

