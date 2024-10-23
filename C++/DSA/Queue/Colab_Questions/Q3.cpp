////PROBLEM STATEMENT
//
////Sam is developing an order processing system for a company. To efficiently manage incoming orders, he decides to implement a queue data structure using an array. The queue will store order IDs.
////
////
////
////He wants to implement the following operations:
////
////Insert Order: Add an order ID to the end of the queue.
////Process Order: Remove and process the next order ID from the queue.
////Display Queue: Display the order IDs in the queue.
////
////
////Can you assist Sam in implementing the queue?
////
////Input format :
////The input consists of an integer option representing the action to be performed:
////
////Option 1: Enqueue a new order ID into the queue. The next line contains an integer representing the element to be inserted.
////
////Option 2: Dequeue an order ID from the queue for processing.
////
////Option 3: Display the list of order IDs currently in the queue.
////
////Option 4: Exit the program.
////
////Output format :
////The program provides appropriate outputs based on the choice:
////
////When enqueuing an order (option 1), the program outputs the order ID that is inserted into the queue.
////
////When dequeuing an order (option 2), the program outputs the order ID that is being processed.
////
////When displaying the order IDs (option 3), the program shows the order IDs in the queue.
////
////If an enqueue operation is attempted when the queue is full, the program outputs "Queue is full"
////
////If a dequeue operation is attempted when the queue is empty, the program outputs "Queue is empty"
////
////Print "Exiting the program" while exiting the program.
////
////
////
////If the user provides an invalid option, the program outputs an "Invalid option"
////
////
////
////Refer to the sample output for the exact text and format.
////
////Code constraints :
////The maximum size of the queue is defined as max = 5.
////
////The queue can store integer values.
////
////Each order is identified by a unique positive integer order ID.
////
////Sample test cases :
////Input 1 :
////1
////10
////3
////4
////Output 1 :
////Order ID 10 is inserted in the queue
////Order IDs in the queue are: 10
////Exiting the program
////Input 2 :
////1
////30
////1
////40
////2
////3
////4
////Output 2 :
////Order ID 30 is inserted in the queue
////Order ID 40 is inserted in the queue
////Processed Order ID: 30
////Order IDs in the queue are: 40
////Exiting the program
////Input 3 :
////3
////6
////4
////Output 3 :
////Queue is empty
////Invalid option
////Exiting the program
////Input 4 :
////1
////10
////1
////20
////1
////30
////1
////40
////1
////50
////1
////60
////4
////Output 4 :
////Order ID 10 is inserted in the queue
////Order ID 20 is inserted in the queue
////Order ID 30 is inserted in the queue
////Order ID 40 is inserted in the queue
////Order ID 50 is inserted in the queue
////Queue is full
////Exiting the program
//
////ANSWER
//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//void Display(queue<int> Q)
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
//    queue<int> Q;
//    int size = 5;
//    int count=0;
//    int choice , data;
//    do
//    {
//        cin>>choice ;
//        switch(choice)
//        {
//            case 1:
//                cin>>data;
//                if(count == size)
//                {
//                    cout<<"Queue is full"<<endl;
//                    break;
//                }
//                else
//                {
//                    Q.push(data);
//                    cout<<"Order ID "<<data<<" is inserted in the queue"<<endl;
//                    count++;
//                    break;
//                }
//            case 2:
//                cout<<"Processed Order ID: "<<Q.front()<<endl;
//                Q.pop();
//                count--;
//                break;
//                
//            case 3:
//                if(Q.empty())
//                {
//                    cout<<"Queue is empty"<<endl;
//                    break;
//                }
//                else
//                {
//                    cout<<"Order IDs in the queue are: ";
//                    Display(Q);
//                    break;
//                }
//            case 4:
//                cout<<"Exiting the program"<<endl;
//                break;
//            default:
//                cout<<"Invalid option"<<endl;
//                break;
//        }
//    }while(choice != 4);
//    return 0;
//}
