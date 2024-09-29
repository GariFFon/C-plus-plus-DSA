//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//struct Node
//{
//    int data;
//    Node * next;
//};
//
//Node * CreateNode ( int value )
//{
//    Node * newnode = new Node;
//    newnode -> data = value;
//    newnode -> next = nullptr;
//    return newnode;
//}
//
//Node * CreatLL(int arr[],int size, Node *& head)
//{
//    Node * current = nullptr;
//    
//    for(int i=0; i< size ; i++)
//    {
//        Node * temp = CreateNode(arr[i]);
//        if( head == nullptr)
//        {
//            head = temp ;
//            current = head;
//        }
//        else
//        {
//            current -> next = temp ;
//            current = temp;
//        }
//    }
//    current -> next = head;  //This is main Line here....
//    return head;
//}
//
//void Display(Node * head)
//{
//    Node * temp = head;
//    do {
//        cout<<temp->data<<" -> ";
//        temp=temp->next;
//    } while (temp != head);
//    cout<<"NULL"<<endl;
//}
//
//int main1()
//{
//    Node * head = nullptr;
//    
//    int arr[]={10,20,30,40,50};
//    int size = sizeof(arr)/sizeof(arr[0]);
//    CreatLL(arr, size, head);
//    cout<<"Linked List: ";
//    Display(head);
//    
//    return 0;
//    
//}
