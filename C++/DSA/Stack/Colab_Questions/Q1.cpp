//Problem Statement
//
//
//
//Sarah is managing a to-do list application where tasks are represented using a stack implemented as an array. She wants to remove the task that is in the middle of the stack.
//
//
//
//Write a program to help her accomplish this.
//
//
//
//Company Tags: Infosys
//
//Input format :
//The input consists of a single integer n, the number of tasks.
//
//Output format :
//The first line of output prints the initial stack elements.
//
//The second line prints the remaining tasks in the stack after removing the middle task.






//#include <iostream>
//#include <stack>
//#include <algorithm>
//using namespace std;
//
//void Display(stack<int> & st)
//{
//    stack<int> temp = st;
//    while(!temp.empty())
//    {
//        cout<<temp.top()<<" ";
//        temp.pop();
//    }
//    cout<<endl;
//}
//
//void RemoveMiddle(stack<int> &st)
//{
//    
//    int size = st.size();
//    int mid= size/2;
//    
//    stack<int> temp = st;
//
//    for(int i=0; i<size ; i++)
//    {
//        if(i != mid)
//        {
//            cout<<temp.top()<<" ";
//        }
//        temp.pop();
//    }
//}
//int main()
//{
//    stack<int> st;
//    cout<<"Enter The size of the stack: ";
//    int size;
//    cin>>size;
//    for(int j=1; j <=size;j++)
//    {
//        st.push(j);
//    }
//    
//    cout<<"Initial Stack: ";
//    Display(st);
//    
//    cout<<"Stack after Deletion: ";
//    RemoveMiddle(st);
//    cout<<endl;
//    
//    return 0;
//}
