//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
////Stack Implementaion using linked list....
////Here Head will be the top most Element....
//class Node
//{
//public:
//    int data;
//    Node * next;
//    
//    Node(int value)
//    {
//        data = value;
//        next = nullptr;
//    }
//};
//
//class Stack
//{
//private:
//    Node * top;
//public:
//    
//    //creating stack...
//    Stack()
//    {
//        top = nullptr;
//    }
//    
//    //To check whether the stack is empty or not....
//    bool is_Empty()
//    {
//        return top == nullptr;
//    }
//    
//    //is_Full() function: Since you're implementing a stack using a linked list, there is no fixed capacity limit (like in an array-based stack), so a stack implemented using a linked list cannot be "full" unless you're constrained by system memory. Therefore, the is_Full() function is typically not needed in linked list implementations of stacks. However, if you still want to simulate such a check, you can check if memory allocation for a new node fails.
//    
//    void push(int value)
//    {
//        Node * newnode = new Node(value);
//        if(is_Empty())
//        {
//            top = newnode;
//            return;
//        }
//        newnode -> next = top;
//        top = newnode;
//        cout<<"Pushed Element"<<endl;
//    }
//    
//    void pop()
//    {
//        if(is_Empty())
//        {
//            cout<<"The Stack is empty."<<endl;
//            return;
//        }
//        Node * temp = top;
//        top = top -> next;
//        delete temp;
//        cout<<"Poped Element"<<endl;
//    }
//    
//    int Stack_top()
//    {
//        if(is_Empty())
//        {
//            cout<<"Stack is empty."<<endl;
//            return -1;
//        }
//        else
//        {
//            return top->data;
//        }
//    }
//    
//    int peek(int pos)
//    {
//        if(is_Empty())
//        {
//            cout<<"Stack is empty."<<endl;
//            return -1;
//        }
//        else
//        {
//            Node * temp = top;
//            for(int i =0 ; temp!=nullptr && i<pos-1; i++)
//            {
//                temp=temp->next;
//            }
//            if (temp != nullptr)
//            {
//                cout << "Element at position " << pos << ": " << temp->data << endl;
//                return temp->data;
//            }
//            else
//            {
//                cout << "Invalid position!" << endl;
//                return -1;
//            }
//        }
//    }
//    
//    void Display()
//    {
//        if(is_Empty())
//        {
//            cout<<"The Stack is empty."<<endl;
//            return;
//        }
//        Node * temp = top;
//        cout<<"Elements in stack: ";
//        while(temp != nullptr)
//        {
//            cout<<temp->data<<" -> ";
//            temp = temp -> next;
//        }
//        cout<<"NULL"<<endl;
//    }
//};
//
//int main4()
//{
//    Stack st;
//    st.push(10);
//    st.push(20);
//    st.push(30);
//    st.push(40);
//    st.push(50);
//    st.Display();
//    st.peek(1);
//    return 0;
//}
