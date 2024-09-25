//
//  Count_Digits.cpp
//  Basics
//
//  Created by Gourav Dash on 14/08/24.
//

#include <iostream>
using namespace std;

class IntegerManipulator
{
public:
    int num;
};

int main19()
{
    IntegerManipulator n;
    cout<<"Enter the number: ";
    cin>>n.num;
    int count_odd = 0;
    int count_digits = 0;
    while(n.num>0)
    {
      int r;
      r=n.num%10;
      if ( r % 2 == 0)
      {
          count_digits++;
      } else
      {
          count_odd++;
          count_digits++;
      }
      n.num=n.num/10;
    }
    cout<<"Number of digits: "<<count_digits<<endl;
    cout<<"Number of odd digits: "<<count_odd<<endl;
    
    return 0;
}
