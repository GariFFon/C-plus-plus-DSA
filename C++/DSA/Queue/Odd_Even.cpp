//#include <iostream>
//#include <deque>
//#include <queue>
//using namespace std;
//void Display(deque<int> Q)
//{
//    while(!Q.empty())
//    {
//        cout<<Q.front()<<" ";
//        Q.pop_front();
//    }
//    cout<<endl;
//}
//
//void DisplayEven(deque<int> Q)
//{
//    deque<int> temp = Q;
//    deque<int> temp2;
//    while(!temp.empty())
//    {
//        if(temp.front()%2 == 0)
//        {
//            temp2.push_back(temp.front());
//            temp.pop_front();
//        }
//        else
//        {
//            temp.pop_front();
//        }
//    }
//    
//    Display(temp2);
//}
//
//void DisplayOdd(deque<int> Q)
//{
//    deque<int> temp = Q;
//    deque<int> temp2;
//    while(!temp.empty())
//    {
//        if(temp.front()%2 == 0)
//        {
//            temp.pop_front();
//        }
//        else
//        {
//            temp2.push_back(temp.front());
//            temp.pop_front();
//        }
//    }
//    
//    Display(temp2);
//}
//int main()
//{
//    deque<int> dq;
//    int num;
//    do
//    {
//        cin>>num;
//        if(num != -1)
//        {
//            dq.push_back(num);
//        }
//    }while(num != -1);
//    
//    Display(dq);
//    
//    cout<<"Display Even: ";
//    DisplayEven(dq);
//    
//    cout<<"Display Odd: ";
//    DisplayOdd(dq);
//    
//    return 0;
//}
