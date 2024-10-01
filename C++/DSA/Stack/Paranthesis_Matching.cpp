#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class Stack
{
private:
    int size;
    int top;
    char *arr;  // Modified to store characters
public:

    // Constructor to initialize stack with given size
    Stack(int stack_size)
    {
        size = stack_size;
        arr = new char[size];
        top = -1;
    }

    // Destructor to free dynamically allocated memory
    ~Stack()
    {
        delete[] arr;
    }

    // Check if the stack is empty
    bool is_Empty()
    {
        return top == -1;
    }

    // Check if the stack is full
    bool is_Full()
    {
        return top == size - 1;
    }

    // Push an element onto the stack
    void push(char element)
    {
        if (is_Full())
        {
            cout << "Stack Overflow! Stack is full, cannot push." << endl;
            return;
        }
        arr[++top] = element;
    }

    // Pop the top element from the stack
    char pop()
    {
        if (is_Empty())
        {
            cout << "Stack Underflow! Stack is empty, cannot pop." << endl;
            return '\0';  // Return a null character for empty stack
        }
        return arr[top--];
    }

    // Get the top element of the stack
    char stack_top()
    {
        if (is_Empty())
        {
            cout << "Stack is empty." << endl;
            return '\0';
        }
        return arr[top];
    }
};

// Function to check if parentheses are balanced
int isBalance(const char *exp)
{
    Stack st(strlen(exp));  // Initialize stack with length of expression

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            st.push(exp[i]);  // Push open parentheses
        }
        else if (exp[i] == ')')
        {
            if (st.is_Empty())  // If there's no matching open parenthesis
            {
                return 0;  // Unbalanced
            }
            else
            {
                st.pop();  // Pop the matching open parenthesis
            }
        }
    }

    // If stack is empty, all parentheses were balanced
    return st.is_Empty() ? 1 : 0;
}

int main()
{
    const char *exp = "((a+b)*(c-d))";
    if (isBalance(exp))
    {
        cout << "The expression has balanced parentheses." << endl;
        return 1;
    }
    else
    {
        cout << "The expression has unbalanced parentheses." << endl;
        return 0;
    }
    return 0;
}
