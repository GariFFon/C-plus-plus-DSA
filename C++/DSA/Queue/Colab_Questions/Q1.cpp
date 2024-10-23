////PROBLEM STATEMENT
//
////Ramesh is developing a food delivery platform that handles orders from two different regions. The system uses two queues implemented using linked lists to manage incoming orders from each region.
////
////
////
////Your task is to implement a program that checks if the two queues have the same order sequence.
////
////Input format :
////The first line of input consists of an integer N, representing the number of orders for the first queue.
////
////The second line consists of N space-separated integers, representing the order details for the first queue.
////
////The third line consists of an integer M, representing the number of orders for the second queue.
////
////The fourth line consists of M space-separated integers, representing the order details for the second queue.
////
////Output format :
////The output prints whether the queues have the same elements or different elements.
////
////
////
////Refer to the sample output for the exact text and format.
////
////Code constraints :
////The order numbers are integers.
////
////The number of orders for each queue is non-negative.
////
////Sample test cases :
////Input 1 :
////3
////1 2 3
////3
////1 2 3
////Output 1 :
////The queues have the same elements in the same order.
////Input 2 :
////1
////2
////4
////8 3 9 6
////Output 2 :
////The queues do not have the same elements in the same order.
////Input 3 :
////3
////2 3 4
////3
////2 4 3
////Output 3 :
////The queues do not have the same elements in the same order.
//
////ANSWER
//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//void Display(queue<int>Q)
//{
//    while(!Q.empty())
//    {
//        cout<<Q.front()<<" ";
//        Q.pop();
//    }
//    cout<<endl;
//}
//int main()
//{
//    queue<int>Q1;
//    queue<int>Q2;
//    bool check = true;
//    int sizeQ1;
//    cin>>sizeQ1;
//    for(int i=0;i<sizeQ1;i++)
//    {
//        int num1;cin>>num1;Q1.push(num1);
//    }
//    int sizeQ2;cin>>sizeQ2;
//    for(int j=0;j<sizeQ2;j++)
//    {
//        int num2;cin>>num2;Q2.push(num2);
//    }
//    
//    if(sizeQ1 != sizeQ2)
//    {
//        cout<<"The queues do not have the same elements in the same order."<<endl;
//        return 0;
//    }
//    else
//    {
//        while(!Q1.empty() && !Q2.empty())
//        {
//            if(Q1.front() != Q2.front())
//            {
//                cout<<"The queues do not have the same elements in the same order."<<endl;
//                check = false;
//                return 0;
//            }
//            Q1.pop();Q2.pop();
//        }
//    }
//    
//    if(check)
//    {
//        cout<<"The queues have the same elements in the same order."<<endl;
//        return 0;
//    }
//}
