////
////  Deletion_in_SLL.cpp
////  C++
////
////  Created by Gourav Dash on 24/09/24.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//struct Node
//{
//    int data;
//    struct Node * next;
//    
//};
//
//Node * CreateNode(int value)
//{
//    Node * newnode = new Node;
//    newnode->data = value;
//    newnode->next = NULL;
//    return newnode;
//}
//
//void Insertion(Node *& head , int value)
//{
//    Node * temp = head;
//    Node * newnode = CreateNode(value);
//    
//    if(head == nullptr)
//    {
//        head = newnode;
//        return;
//    }
//    
//    while ( temp -> next != NULL)
//    {
//        temp = temp -> next;
//    }
//    temp -> next = newnode;
//}
//
//void DeletionAtBegin(Node *& head)
//{
//    if ( head == nullptr)
//    {
//        cout<<"The Linked List is Empty..."<<endl;
//        return;
//    }
//    Node * temp = head;
//    head = temp -> next;
//    delete temp;
//}
//
//void DeletionAtLast(Node * head)
//{
//    Node * temp = head;
//    
//    if ( head == nullptr )
//    {
//        cout<<"The Linked List is empty.."<<endl;
//        return;
//    }
//    
//    if ( head -> next == nullptr )
//    {
//        delete head;
//        cout<<"The Linked List is empty now..."<<endl;
//        head = nullptr;
//        return;
//    }
//    
//    while( temp -> next -> next != NULL )
//    {
//        temp = temp -> next;
//    }
//    delete temp -> next ;
//    temp -> next = NULL;
//}
//
//void Deletion(Node *& head , int pos)
//{
//    Node * temp = head;
//    
//    if(pos < 0)
//    {
//        cout<<"Invalid Positon..."<<endl;
//        return;
//    }
//
//    if ( head == nullptr)
//    {
//        cout<<"The Linked List is Empty..."<<endl;
//    }
//    
//    if ( head -> next == NULL)
//    {
//        delete head ;
//        cout<<"The Linkked List is empty Now.."<<endl;
//        head = nullptr;
//        return;
//    }
//    
//    if( pos == 1)
//    {
//        DeletionAtBegin(head);
//    }
//    
//    for (int i=1; i < pos - 1 && temp != nullptr ;i++)
//    {
//        temp = temp -> next;
//    }
//    
//    if (temp == nullptr && temp->next == nullptr) {
//            cout << "Position out of bounds!" << endl;
//            return;
//        }
//    
//    Node * Deletepointer = temp -> next;
//    temp -> next = temp -> next -> next;
//    delete Deletepointer;
//}
//
//void Display(Node * head)
//{
//    Node * temp = head;
//    while(temp != NULL)
//    {
//        cout<<temp->data<<" -> ";
//        temp= temp -> next;
//    }
//    cout<<"NULL"<<endl;
//}
//
//int main12()
//{
//    Node * head = nullptr;
//    
////    Node * current = nullptr;
////    int arr[] = {10,20,30,40,50};
////    int size = sizeof(arr)/sizeof(arr[0]);
////    
////    for(int i=0;i<size;i++)
////    {
////        Node * temp = CreateNode(arr[i]);
////        
////        if( head == nullptr )
////        {
////            head = temp;
////            current = head;
////        }
////        else
////        {
////            current -> next = temp;
////            current = temp;
////        }
////    }
//    Display(head);
//    Insertion(head,10);
//    Display(head);
//    Insertion(head,20);
//    Display(head);
//    Insertion(head,30);
//    Display(head);
//    Insertion(head,40);
//    Display(head);
//    Insertion(head,50);
//    Display(head);
//    Deletion(head, 3);
//    Display(head);
//    DeletionAtBegin(head);
//    Display(head);
//    DeletionAtLast(head);
//    Display(head);
//    Deletion(head, 2);
//    Display(head);
//    DeletionAtBegin(head);
//    Display(head);
//    return 0;
//    
//}
//
