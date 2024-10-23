////PROBLEM STATEMENT
//
////Imagine you are tasked with implementing a ticketing system for a concert event using a queue using a linked list data structure.
////
////
////
////The program should store ticket numbers in a queue and display them in a zigzag pattern. The program should prompt the user to enter the capacity of the ticket queue and allow them to enqueue ticket numbers. After enqueueing, the program should display the ticket numbers in the zigzag pattern.
////
////Input format :
////The first line of input consists of a single integer representing the capacity of the ticket queue.
////
////The next line contains a sequence of integers representing the ticket numbers to enqueue.
////
////The sequence should end with -1 to stop enqueueing.
////
////Output format :
////The output prints the ticket numbers stored in the queue, displayed in a zigzag pattern.
////
////
////
////Refer to the sample output for formatting specifications.
////
////Code constraints :
////The ticket numbers must be positive integers.
////
////The capacity of the queue should be a positive integer.
////
////Sample test cases :
////Input 1 :
////5
////10 20 30 40 50 -1
////Output 1 :
////10 50 20 40 30
////Input 2 :
////8
////11 22 33 44 55 66 77 88 -1
////Output 2 :
////11 88 22 77 33 66 44 55
//
////ANSWER
//
//#include <iostream>
//#include <queue>
//#include <stack>
//using namespace std;
//
//void Display(queue<int>Q)
//{
//    int size = Q.size();
//    queue<int> temp=Q;
//    stack<int> st;
//    for(int i=0;i<size;i++)
//    {
//        st.push(temp.front());
//        temp.pop();
//    }
//    int count =1;
//    while(size != 0)
//    {
//        if(count%2 != 0)
//        {
//            cout<<Q.front()<<" ";
//            Q.pop();
//            count++;
//        }
//        else
//        {
//            cout<<st.top()<<" ";
//            st.pop();
//            count++;
//        }
//        size--;
//    }
//}
//int main()
//{
//    queue<int> Q;
//    int size;cin>>size;
//    for(int i=0;i<=size;i++)
//    {
//        int num;cin>>num;
//        if(num != -1)
//            Q.push(num);
//        else
//            break;
//    }
//    
//    Display(Q);
//    return 0;
//}
//
