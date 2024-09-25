//
//  practise.cpp
//  Colab_Static
//
//  Created by Gourav Dash on 14/08/24.
//

//Q2

//Design a banking system to handle account transactions. The system should allow users to deposit and withdraw money from their accounts. Each account is associated with an account holder's name, account number, and balance.

//Implement the system using a union named AccountData that contains a structure with fields for the account holder's name, account number, and balance.

//Input format :
//The first line consists of the account holder's name as a string.

//The second line consists of the account number as an integer.

//The third line consists of the initial balance as a double value.

//The fourth line consists of the amount to deposit as a double value.

//The fifth line consists of the amount to withdraw as a double value.

//Output format :
//The first line of output prints "Amount deposited successfully." after processing the deposit.

//The second line of output prints:

//"Amount withdrawn successfully." if the withdrawal is successful.
//"Insufficient balance. Withdrawal failed." if the balance is insufficient.
//The third line of output prints "Account details:".

//The fourth line of output prints "Account holder's name: <name>", where <name> is the account holder's name.

//The fifth line of output prints "Account number: <number>", where <number> is the account number.

//The sixth line of output prints "Balance: <balance>", where <balance> is the remaining balance after transactions, formatted to two decimal places.

//Refer to sample input and output specifications

//Code constraints :
//The account holder's name should not exceed 50 characters.

//The initial balance, deposit amount, and withdrawal amount should be non-negative double values.

#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

union Account
{
public:
    double balance;
};
int main2()
{
    Account a1;
    string name;
    getline(cin,name);
    int acc;
    double deposite_amt;
    double total;
    double withdraw_amt;
    cin>>acc;
    cin>>a1.balance;
    cin>>deposite_amt;
    cin>>withdraw_amt;
    total= a1.balance + deposite_amt;
    a1.balance= total - withdraw_amt;
    cout<<"Amount deposited successfully."<<endl;
    if(a1.balance < 0)
    {
        cout<<"Insufficient balance. Withdrawal failed."<<endl;
        cout<<"Account details:"<<endl;
        cout<<"Account holder's name: "<<name<<endl;
        cout<<"Account number: "<<acc<<endl;
        cout<<"Balance: "<<fixed<<setprecision(2)<<total<<endl;
    }
    else
    {
        cout<<"Amount withdrawn successfully."<<endl;
        cout<<"Account details:"<<endl;
        cout<<"Account holder's name: "<<name<<endl;
        cout<<"Account number: "<<acc<<endl;
        cout<<"Balance: "<<fixed<<setprecision(2)<<a1.balance<<endl;
    }
    
    return 0;
}
