//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//using namespace std;
//
//struct Node
//{
//    int data;
//    Node * next;
//};
//Node * createNode (int value)
//{
//    Node * NewNode = new Node;
//    NewNode -> data = value;
//    NewNode -> next = NULL;
//    return NewNode;
//}
//
//void InsertAtBegin(Node *& head,int value)
//{
//    Node * temp= createNode(value);
//    if(head == nullptr)
//    {
//        head = temp;
//    }
//    else
//    {
//        temp->next = head ;
//        head = temp;
//    }
//}
//
//void InsertionSorted(Node *& head, int value)
//{
//    Node * newnode = createNode(value);
//    Node * temp = head;
//    
//    //If the Linked List is Empty...
//    if(head == nullptr)
//    {
//        head = newnode;
//        return;
//    }
//    
//    //If inserrtion sort is happening at the beginning of the Linked List....
//    
//    if(value <= temp -> data)
//    {
//        InsertAtBegin(head, value);
//    }
//    
//    //If Insertion sort is happening at the last of the linked list...
//    Node * last = head;
//    while(last->next != NULL )
//    {
//        last = last -> next;
//    }
//    if(last->data < value)
//    {
//        last -> next = newnode;
//        last = newnode ;
//    }
//        
//    while(temp->data < value)
//    {
//        if(value >= temp->data && value < temp->next->data)
//        {
//            newnode -> next = temp->next;
//            temp->next = newnode;
//        }
//        temp=temp->next;
//    }
//}
//
//void Display(Node * head)
//{
//    Node * temp = head;
//    while(temp != NULL)
//    {
//        cout<<temp->data<<" -> ";
//        temp=temp->next;
//    }
//    cout<<"NUll"<<endl;
//}
//
//int main11()
//{
//    Node * head = nullptr;
////    Node * current = nullptr;
////    
////    int arr[]={10,20,30,50,60,70};
////    int size=sizeof(arr)/sizeof(arr[0]);
////    
////    for(int i=0;i<size;i++)
////    {
////        Node * temp = new Node(arr[i]);
////        if( head == nullptr)
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
////    
//    InsertionSorted(head, 5);
//    InsertionSorted(head, 40);
//    InsertionSorted(head, 80);
//    InsertionSorted(head, 67);
//    InsertionSorted(head, 90);
//    cout<<"Linked List: ";
//    Display(head);
//    return 0;
//}
