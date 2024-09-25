////
////  Display4_in_SLL.cpp
////  C++
////
////  Created by Gourav Dash on 24/09/24.
////
//
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
//void Sort_Check(Node * head)
//{
//    Node * temp = head;
//    
//    if(head == nullptr)
//    {
//        cout<<"The Linked List is empty..."<<endl;
//        return;
//    }
//    
//    if( head -> next == nullptr)
//    {
//        cout<<"There is only single element in the Linked List.."<<endl;
//        return;
//    }
//    
//    while(temp->next != nullptr)
//    {
//        if(temp->data > temp -> next -> data)
//        {
//            cout<<"The Linked List is not Sorted"<<endl;
//            return;
//        }
//        temp=temp -> next;
//    }
//    cout<<"The Linked List is Sorted"<<endl;
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
//
//int main13()
//{
//    Node * head = nullptr;
//    int arr[]={10,20,30,40,50};
//    int size = sizeof(arr)/sizeof(arr[0]);
//    createLL(arr, size, head);
//    Display(head);
//    Sort_Check(head);
//    return 0;
//}
