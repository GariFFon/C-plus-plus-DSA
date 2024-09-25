//
//  main.cpp
//  Overloading
//
//  Created by Gourav Dash on 13/08/24.
//

#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int img;
    
    Complex add(Complex c)
    {
        Complex Temp;
        Temp.real= real + c.real;
        Temp.img= img + c.img;
        
        return Temp;
    }
};

int main1()
{
    Complex c1,c2,c3;
    c1.real =5; c1.img=3;
    c2.real =10; c2.img=5;
    c3 = c1.add(c2);
    
    cout<<c3.real<<" + i"<<c3.img<<endl;
    
    return 0;
    
}
