#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int precedence(char x)
{
    if(x == '+' || x == '-')
        return 1;
    else if(x == '*' || x == '/')
        return 2;
    return 0;  // For non-operators, such as operands or invalid characters
}

bool isOperand(char x)
{
    // Return true if x is an operand (not an operator)
    if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z') || (x >= '0' && x <= '9'))
        return true;
    return false;
}

string InToPost(string infix)
{
    stack<char> s;
    string postfix = "";  // Resulting postfix expression
    s.push('#');  // Placeholder for the bottom of the stack

    int i = 0;
    while (infix[i] != '\0')
    {
        // If the current character is an operand, append it to the postfix expression
        if (isOperand(infix[i]))
            postfix += infix[i++];
        else
        {
            // If the current character is an operator, pop from the stack based on precedence
            if (precedence(infix[i]) > precedence(s.top()))
                s.push(infix[i++]);
            else
            {
                postfix += s.top();
                s.pop();
            }
        }
    }
    
    // Pop any remaining operators in the stack
    while (s.top() != '#')
    {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main()
{
    string infix = "a+b*c-d/e";  // Example infix expression
    string postfix = InToPost(infix);  // Convert infix to postfix
    cout << "Postfix Expression: " << postfix << endl;  // Output the result
    return 0;
}
