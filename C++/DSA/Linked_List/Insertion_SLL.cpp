//#include <stdio.h>
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//struct Node
//{
//    int data;
//    Node * next;
//};
//
//void Insertion(Node *& head, int pos, int value)
//{
//    Node * t = new Node;
//    t->data = value;
//    t->next = NULL;
//    Node * temp = head;
//    if( pos == 0)
//    {
//        t->next = head;
//        head = t;
//    }
//    else if(pos > 0)
//    {
//        for(int i=0;i<pos - 1 && temp != NULL ; i++)
//        {
//            temp = temp -> next;
//        }
//        if(temp)
//        {
//            t -> next = temp -> next;
//            temp ->next = t;
//        }
//    }
//}
//
//void count(Node * head)
//{
//    Node * temp2 =head;
//    int count =0;
//    while(temp2!=NULL)
//    {
//        count++;
//        temp2=temp2->next;
//    }
//    cout<<"Total Nodes: "<<count<<endl;
//}
//
//void Display(Node * head)
//{
//    Node * temp =head;
//    while(temp!=NULL)
//    {
//        cout<<temp->data<<"->";
//        temp=temp->next;
//    }
//    cout<<"NULL"<<endl;
//}
//int main8()
//{
//    Node * head=nullptr;
//    Node * current=nullptr;
//    
//    int arr[]={10,20,30,40,50};
//    int size=sizeof(arr)/sizeof(arr[0]);
//    
//    for(int i=0;i<size;i++)
//    {
//        Node * temp = new Node(arr[i]);
//        if(head == nullptr)
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
//    
//    cout<<"Linked List Before Insertion: ";
//    Display(head);
//    int pos=5;
//    Insertion(head,pos,60);
//    cout<<"Linked List After Insertion at last: ";
//    Display(head);
//    pos=0;
//    Insertion(head,pos,5);
//    cout<<"Linked List After Insertion at First: ";
//    Display(head);
//    pos = 3;
//    Insertion(head,pos,35);
//    cout<<"Linked List After Insertion at a specific Postion: ";
//    Display(head);
//    count(head);
//    return 0;
//}
