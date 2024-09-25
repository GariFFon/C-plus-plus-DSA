//
//  main.cpp
//  Colab_Static
//
//  Created by Gourav Dash on 14/08/24.
//

//Q1.

//Guna is developing a banking application that allows customers to deposit money into their accounts. The bank provides each customer with an initial balance of 50 rupees. To facilitate the deposit process, Guna has created a class called AddAmount.

//This class represents a transaction to add a specific amount of money to a customer's account. After the transaction is completed, the total amount in the customer's account is printed.

//Input format :
//The input consists of a single integer, representing the additional amount to be deposited into the customer's account (the deposit amount).

//Output format :
//The output displays the total amount in the customer's account after the deposit.

//Refer to the sample output for formatting specifications.

//Code constraints :
//The input deposit amount is a non-negative integer.

#include <iostream>
using namespace std;

class Add
{
 public:
    int num;
    int a=50;

    int display()
    {
        return a+num;
    }
};

int main1()
{
    Add a1;
    cin>>a1.num;
    cout<<a1.display()<<endl;
    return 0;
}
