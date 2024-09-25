//#include <stdio.h>
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//struct Node
//{
//    int data;
//    struct Node * next;
//};
//
//Node * CreateNode (int value)
//{
//    Node * newnode = new Node ;
//    newnode -> data = value;
//    newnode -> next = NULL;
//    return newnode;
//}
//
//void createLL(int arr[] , int size ,Node *& head)
//{
//    Node * current = nullptr;
//
//    for(int i=0 ; i<size ; i++ )
//    {
//        Node * newnode = CreateNode(arr[i]);
//
//        if( head == nullptr)
//        {
//            head = newnode;
//            current = head;
//        }
//        else
//        {
//            current-> next = newnode;
//            current = newnode;
//        }
//    }
//}
//
//void Reverse(Node *& head)
//{
//    if(head == nullptr)
//    {
//        cout<<"The Linked List is empty..."<<endl;
//        return;
//    }
//    
//    if(head -> next == nullptr)
//    {
//        cout<<"The Linked List has only one element in it.."<<endl;
//        return;
//    }
//    
//    Node * prev = nullptr;
//    Node * current = head;
//    Node * next = nullptr;
//    
//    while( current != nullptr )
//    {
//        next = current -> next;
//        current -> next = prev;
//        prev= current;
//        current = next;
//    }
//    
//    head = prev;
//}
//
//void Display(Node * head)
//{
//    Node * temp = head;
//    while ( temp != nullptr)
//    {
//        cout<<temp->data<<" -> ";
//        temp= temp -> next;
//    }
//    cout<<"NULL"<<endl;
//}
//int main15()
//{
//    Node * head = nullptr;
//    int arr[]={10,20,30,40,50};
//    int size = sizeof(arr)/sizeof(arr[0]);
//    createLL(arr, size, head);
//    Display(head);
//    cout<<"Reverse Linked List: ";
//    Reverse(head);
//    Display(head);
//    return 0;
//}
