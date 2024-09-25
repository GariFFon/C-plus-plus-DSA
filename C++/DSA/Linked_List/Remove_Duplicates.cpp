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
//    for(int i=0 ; i<size ; i++ ) //This size should always be i<size...
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
//
//void rmduplicate(Node *& head)
//{
//    Node * temp = head;
//    
//    if (head == nullptr)
//    {
//        cout<<"Linked List is empty..."<<endl;
//        return;
//    }
//    
//    if( head -> next == nullptr)
//    {
//        cout<<"Linked List has only One Element..."<<endl;
//        return;
//    }
//    
//    while(temp != nullptr && temp -> next != nullptr)
//    {
//        if( temp -> data == temp-> next -> data)
//        {
//            Node * noderemove = temp-> next;
//            temp -> next = temp-> next -> next;
//            delete noderemove;
//        }
//        else //Move Temp only if No Deletion happends...
//        {
//            temp=temp->next;
//        }
//    }
//}
//
//void Display(Node * head)
//{
//    Node * temp = head;
//    while ( temp != nullptr) //This should always be nullpointer not NULL
//    {
//        cout<<temp->data<<" -> ";
//        temp= temp -> next;
//    }
//    cout<<"NULL"<<endl;
//}
//int main14()
//{
//    Node * head = nullptr;
//    int arr[]={10,20,20,30,30,30,50,50};
//    int size = sizeof(arr)/sizeof(arr[0]);
//    createLL(arr, size, head);
//    Display(head);
//    rmduplicate(head);
//    cout<<"New Linked List: ";
//    Display(head);
//    return 0;
//}
