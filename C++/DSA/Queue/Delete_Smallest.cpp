//#include <iostream>
//#include <queue>
//#include <iomanip>
//using namespace std;
//
//void Display(queue<double> Q)
//{
//    while(!Q.empty())
//    {
//        cout<<fixed<<setprecision(1)<<Q.front()<<" ";
//        Q.pop();
//    }
//    cout<<endl;
//}
//
//void DeleteSmallest(queue<double> Q)
//{
//    queue<double> temp = Q;
//    int size = temp.size();
//    queue<double> temp2;
//    queue<double> temp3;
//
//    double smallest = temp.front();
//    for(int i=0; i<size; i++)
//    {
//        if(temp.front()<smallest)
//        {
//            smallest = temp.front();
//        }
//        temp2.push(temp.front());
//        temp.pop();
//    }
//    
//    while(!temp2.empty())
//    {
//        if(temp2.front() == smallest)
//        {
//            temp2.pop();
//        }
//        else
//        {
//            temp3.push(temp2.front());
//            temp2.pop();
//        }
//    }
//    Display(temp3);
//}
//int main()
//{
//    queue<double> Q;
//    int num;cin>>num;
//    
//    for(int i=0;i<num;i++)
//    {
//        double num2;
//        cin>>num2;
//        Q.push(num2);
//    }
//    
//    DeleteSmallest(Q);
//    return 0;
//    
//}
