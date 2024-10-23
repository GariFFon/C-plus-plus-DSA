//#include <iostream>
//#include <deque>
//using namespace std;
//
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
//void MostFrequency(deque<int> Q)
//{
//    deque<int> temp = Q;
//    
//    int freq=1;
//    while(!temp.empty())
//    {
//        int current = temp.front();
//        temp.pop_front();
//        int count=1;
//        for(int element : temp)
//        {
//            if(element == current)
//            {
//                count++;
//            }
//        }
//        if(freq<count)
//        {
//            freq = count;
//        }
//    }
//    
//    cout<<"Most Repeatitions: "<<freq<<endl;
//}
//int main()
//{
//    deque<int> dq;
//    int num;
//    
//    do
//    {
//        cin>>num;
//        if(num != -1)
//        {
//            dq.push_back(num);
//        }
//    } while(num != -1);
//    
//    MostFrequency(dq);
//    return 0;
//}
