//Problem Statement
//
//
//
//Julie is enthusiastic about learning data structures, and she has started with one of the fundamental data structures: stack. She is eager to practice stacks with various operations like push, pop, and display.
//
//
//
//Can you help her by designing an interactive program that allows her to perform these stack operations using an array?
//
//
//
//Company Tags: TCS
//
//Input format :
//The program expects the following inputs in a loop until the user chooses to exit.
//
//
//
//An integer indicating the choice of operation:
//
//1: Push an element onto the stack. The following input is the integer to push onto the stack.
//
//2: Pop an element from the stack
//
//3: Display the elements in the stack
//
//4: Exit the program
//
//Output format :
//The program produces the following outputs based on the chosen operation:
//
//
//
//Choice 1: If the push operation is successful, it displays "Element X pushed onto the stack" where X is the element pushed.
//
//
//
//Choice 2:
//
//If the pop operation is successful, it displays "Element Y popped from the stack" where Y is the element popped.
//If the stack is empty, it displays "Stack Underflow. Cannot perform pop operation"
//
//
//Choice 3:
//
//If the stack is empty, it displays "Stack is empty"
//If the stack has elements, it displays "Elements in the stack: " followed by the stack elements.
//
//
//Choice 4: If the choice is 4, it displays "Exiting the program"
//
//
//
//If the choice is greater than 4 or invalid input, it displays "Invalid choice"
//
//
//
//Refer to the sample output for the exact format.
//
//Code constraints :
//The maximum size of the stack is defined as MAX_SIZE = 100.
//
//Sample test cases :
//Input 1 :
//1
//5
//3
//2
//3
//4
//Output 1 :
//Element 5 pushed onto the stack
//Elements in the stack: 5
//Element 5 popped from the stack
//Stack is empty
//Exiting the program
//Input 2 :
//1
//10
//1
//20
//1
//30
//2
//3
//4
//Output 2 :
//Element 10 pushed onto the stack
//Element 20 pushed onto the stack
//Element 30 pushed onto the stack
//Element 30 popped from the stack
//Elements in the stack: 20 10
//Exiting the program
//Input 3 :
//1
//25
//1
//36
//2
//2
//3
//2
//4
//Output 3 :
//Element 25 pushed onto the stack
//Element 36 pushed onto the stack
//Element 36 popped from the stack
//Element 25 popped from the stack
//Stack is empty
//Stack Underflow. Cannot perform pop operation
//Exiting the program
//Input 4 :
//5
//3
//4
//Output 4 :
//Invalid choice
//Stack is empty
//Exiting the program


//Answer

#include <iostream>
#include <stack>
using namespace std;

void Display(stack<int> st)
{
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main()
{
    stack<int> st;
    int choice , num;
    do
    {
        cin>> choice ;
        switch(choice)
        {
            case 1:
                cin>>num;
                st.push(num);
                cout<<"Element "<<num<<" pushed onto the stack"<<endl;
                break;
                
            case 2:
                if(!st.empty())
                {
                    cout<<"Element "<<st.top()<<" popped from the stack"<<endl;
                    st.pop();
                    break;
                }
                else
                {
                    cout<<"Stack Underflow. Cannot perform pop operation"<<endl;
                    break;
                }
            case 3:
                if(st.empty())
                {
                    cout<<"Stack is empty"<<endl;
                    break;
                }
                else
                {
                    cout<<"Elements in the stack: ";
                    Display(st);
                    break;
                }
                
            case 4:
                cout<<"Exiting the program"<<endl;
                break;
                
            default:
                cout<<"Invalid choice"<<endl;
                break;
        }
    } while(choice != 4);
    
    return 0;
}
