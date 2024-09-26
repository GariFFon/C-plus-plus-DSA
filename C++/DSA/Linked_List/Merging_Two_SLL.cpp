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
//Node * Merge(Node * head, Node * head2)
//{
//    Node * temp1 = head;
//    Node * temp2 = head2;
//    
//    if( temp1 == nullptr)
//    {
//        cout<<"The Linked List 1 is empty"<<endl;
//        return 0;
//    }
//    if(temp2 == nullptr)
//    {
//        cout<<"The Linked List 2 is empty"<<endl;
//        return 0;
//    }
//    
//    //I need more understand of this pointer to pointer Concept...
//    
//    Node * mergeHead = nullptr;
//    Node ** tail = &mergeHead;
//    
//    while ( temp1 != NULL && temp2 != NULL)
//    {
//        if( temp1 -> data < temp2 -> data)
//        {
//            *tail = temp1;
//            temp1= temp1 -> next;
//        }
//        else
//        {
//            *tail = temp2;
//            temp2= temp2-> next;
//        }
//        tail = &((*tail)->next);
//    }
//    
//    if( temp1 != nullptr)
//    {
//        *tail = temp1;
//    }
//    else
//    {
//        *tail = temp2;
//    }
//    
//    return mergeHead;
//    
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
//int main17()
//{
//    Node * head = nullptr;
//    Node * head2 = nullptr;
//    
//    int arr[]={10,20,30,40,50};
//    int size = sizeof(arr)/sizeof(arr[0]);
//    createLL(arr, size, head);
//    cout<<"Linked List 1: ";
//    Display(head);
//    
//    int arr2[]={15,25,35,45,55};
//    int size2 = sizeof(arr2)/sizeof(arr2[0]);
//    createLL(arr2, size2, head2);
//    cout<<"Linked List 2: ";
//    Display(head2);
//
//    Merge(head, head2);
//    cout<<"The Merge Linked List is: "<<endl;
//    Display(head);
//    return 0;
//}
//
