#include <iostream>
#include <cstdlib>
using namespace std;


class Stack
{
private:
    int size;
    int top;
    int * arr;
public:
    
    //Constructor for Stack... to initialize stack withing given size
    //Create Stack
    Stack(int stack_size)
    {
        size = stack_size;
        arr = new int[size];
        top = -1;
    }
    
    //Destructor for Stack... to free dynamically allocated memory
    ~Stack()
    {
        delete[] arr;
    }
    
    
    //If Stack is Empty...
    bool is_Empty()
    {
        return top == -1;
    }
    
    //IF Stack is Full....
    bool is_Full()
    {
        return top == size - 1;
    }
    
    //To Know the top most element in the stack...
    int stack_top()
    {
        if(is_Empty())
        {
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    
    //Pushing Element in the stack...
    void push(int element)
    {
        if(is_Full())
        {
            cout<<"Stack Overflow!!! Stack is Full cannot Push."<<endl;
            return;
        }
        arr[++top] = element;
        cout<<element<<" Pushed"<<endl;
    }
    
    //To Delete the topmost element from the stack...
    void pop()
    {
        if(is_Empty())
        {
            cout<<"Stack Underflow!!! Stack is already Empty cannot pop."<<endl;
            return;
        }
        cout<<arr[top--]<<" Poped"<<endl;
    }
    
    //To Find the element in particular postion in the stack
    int peek(int position)
    {
        if(is_Empty())
        {
            cout<<"Stack is empty."<<endl;
            return -1;
        }
        if(top - position + 1 < 0)
        {
            cout<<"Invalid Positon..."<<endl;
            return -1;
        }
        
        return arr[top - position + 1];
    }
    
    //To Dislay the Elements of Stack
    void Display()
    {
        if(is_Empty())
        {
            cout<<"Stack is empty."<<endl;
            return;
        }
        else
        {
            cout<<"Elements in stack are: ";
            for(int i=0 ; i<=top ; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    
};
int main()
{
    int stack_size;
    cout<<"Enter the size of the array: ";
    cin>>stack_size;
    
    Stack st(stack_size);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.Display();
    cout<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.Display();
    cout<<endl;
    return 0;
}
