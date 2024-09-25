////
////  Display3_Linked_List.cpp
////  DSA
////
////  Created by Gourav Dash on 18/09/24.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//struct Node
//{
//    int data;
//    Node * next;
//}*head=NULL;
//
//void createNode(int arr[],int n)
//{
//    Node *t,*last;
//    head = new Node;
//    
//    head->data=arr[0];
//    head -> next = NULL;
//    last=head;
//    
//    for (int i=1;i<n;i++)
//    {
//        t=new Node;
//        t->data = arr[i];
//        t->next = NULL;
//        last -> next = t;
//        last = t;
//    }
//}
//
//void Display(Node* head)
//{
//    Node * temp = head;
//    while (temp!=NULL)
//    {
//        cout<<temp->data<<"->";
//        temp=temp->next;
//    }
//    cout<<"NULL"<<endl;
//}
//int main3()
//{
//    int arr[]={10,20,30,40,50};
//    createNode(arr, 5);
//    Display(head);
//    return 0;
//}
