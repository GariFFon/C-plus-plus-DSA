////
////  Concatenating_Two_SLL.cpp
////  DSA
////
////  Created by Gourav Dash on 25/09/24.
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
//Node * CreateNode( int value )
//{
//    Node * newnode = new Node;
//    newnode -> data = value;
//    newnode -> next = NULL;
//    return newnode;
//}
//
//void CreateLL(int arr[],int size,Node *& head)
//{
//    Node * current = nullptr;
//    for(int i=0; i< size ; i++)
//    {
//        Node * temp = CreateNode(arr[i]);
//        if( head == nullptr )
//        {
//            head = temp;
//            current = head;
//        }
//        else
//        {
//            current -> next = temp;
//            current = temp;
//        }
//    }
//}
//
//void Concatenation(Node *& head, Node *& head2)
//{
//    Node * temp = head;
//    
//    while ( temp -> next != nullptr)
//    {
//        temp = temp -> next;
//    }
//    
//    temp -> next = head2;
//}
//
//void Display(Node * head)
//{
//    Node * temp = head;
//    while (temp != nullptr)
//    {
//        cout<<temp->data<<" -> ";
//        temp= temp-> next ;
//    }
//    cout<<"NULL"<<endl;
//}
//
//int main16()
//{
//    Node * head = nullptr;
//    int arr[]={10,20,30,40,50};
//    int size = sizeof(arr)/sizeof(arr[0]);
//    CreateLL(arr, size, head);
//    cout<<"Linked List 1: ";
//    Display(head);
//    
//    Node * head2 = nullptr;
//    int arr2[]={60,70,80,90,100};
//    int size2 = sizeof(arr2)/sizeof(arr2[0]);
//    CreateLL(arr2, size2, head2);
//    cout<<"Linked List 2: ";
//    Display(head2);
//    
//    cout<<"Linked List 1 + 2 : ";
//    Concatenation(head, head2);
//    Display(head);
//    return 0;
//}
