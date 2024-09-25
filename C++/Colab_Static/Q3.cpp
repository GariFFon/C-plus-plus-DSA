//
//  Q3.cpp
//  Colab_Static
//
//  Created by Gourav Dash on 14/08/24.
//

//Q3

//You are developing a module for a text-processing application that will manipulate integers. The module should provide functionalities to set an integer, count the number of digits, find the number of odd digits, and calculate the sum of odd digits in the integer.



//You are tasked with implementing an IntegerManipulator class that performs various operations on a given integer. The class should provide methods to count the number of digits, find the number of odd digits, and calculate the sum of odd digits in the integer.

//Use a Non-inline member function.

//Note: This is a sample question asked in a mPhasis interview.

//Input format :
//The input consists of an integer n.

//Output format :
//The first line displays the number of digits in the number.

//The second line displays the number of odd digits in the integer.

//Refer to the sample output for formatting specifications.

//Code constraints :
//1 ≤ n ≤ 109

#include <iostream>
using namespace std;

class IntegerManipulator
{
public:
    int num;
};

int main3()
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
